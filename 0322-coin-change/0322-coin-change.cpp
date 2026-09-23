class Solution {
public:
    int coinChange(vector<int>& arr, int sum) {

        int n = arr.size();

        int** t = new int*[n + 1];

        for (int i = 0; i <= n; i++) {
            t[i] = new int[sum + 1];
        }

        // First row
        for (int j = 0; j <= sum; j++) {
            t[0][j] = INT_MAX-1;
        }

        // First column
        for (int i = 1; i <= n; i++) {
            t[i][0] = 0;
        }

        for(int j=1;j<sum+1;j++){

            if(j%arr[0] ==0){
                t[1][j] = j/arr[0];
            }

            else{
                t[1][j] =INT_MAX-1;
            }
        }


                   for(int i=1;i<n+1;i++){


                       for(int j=1;j<sum+1;j++){

                       if(arr[i-1]<=j){

                        // +1 add karna mat bhulna 

                       t[i][j] = min(t[i][j-arr[i-1]]+1 , t[i-1][j]);
                       }

                   else{

                       t[i][j] = t[i-1][j];
                       }


                       }
                   }



                   if(t[n][sum] == INT_MAX-1)
                    return -1;


                   return t[n][sum];
        
    }
};
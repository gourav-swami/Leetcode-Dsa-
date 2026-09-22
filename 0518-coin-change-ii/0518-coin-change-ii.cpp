class Solution {
public:
    int change(int sum, vector<int>& arr) {

        int n = arr.size();

               long long** t = new long long*[n + 1];

        for (int i = 0; i <= n; i++) {
            t[i] = new long long[sum + 1];
        }

        // First row
        for (int j = 0; j <= sum; j++) {
            t[0][j] = 0;
        }

        // First column
        for (int i = 0; i <= n; i++) {
            t[i][0] = 1;
        }


                   for(int i=1;i<n+1;i++){


                       for(int j=1;j<sum+1;j++){

                       if(arr[i-1]<=j){

                       long long x = (long long)t[i][j-arr[i-1]] + t[i-1][j];

                       if (x > INT_MAX) t[i][j] = INT_MAX;
                        else{
                        t[i][j] = x;
                       }
                       }

                   else{

                       t[i][j] = t[i-1][j];
                       }


                       }
                   }



                int ans = t[n][sum];

                for (int i = 0; i <= n; i++) {
                delete[] t[i];
                    }
                delete[] t;

                return ans;


                  
        
    }
};
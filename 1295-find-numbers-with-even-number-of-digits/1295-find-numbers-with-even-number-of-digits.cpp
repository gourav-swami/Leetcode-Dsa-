class Solution {
public:
    int findNumbers(vector<int>& arr) {

        int n = arr.size();
        int even =0;

        for(int i=0;i<n;i++){

            int x = arr[i];

            int count =0;

            while(x!=0){

                int digit = x%10;
                x=x/10;
                count++;
                

            }

            if(count%2 == 0){
                even +=1;
            }
       }

       return even;

        
        
    }
};
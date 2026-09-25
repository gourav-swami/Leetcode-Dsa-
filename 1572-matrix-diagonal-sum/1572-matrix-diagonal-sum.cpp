class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {

        int sum = 0;
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            sum += arr[i][i]; 
    
              
            if(i!=n-i-1){
                sum += arr[i][n-1-i]; 
            }      
            }

            return sum ;
        
    }
};
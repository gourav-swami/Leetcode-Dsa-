class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& arr) {

        int n = arr.size();

        int m = arr[0].size();

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                
                if(arr[i][j] != arr[i-1][j-1]){
                    return false;
                }
                
            }
        }

        return true;


        
    }
};
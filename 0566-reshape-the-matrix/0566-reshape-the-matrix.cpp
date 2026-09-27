class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& arr, int r, int c) {

        vector<vector<int>> ans(r,vector<int> (c));

        int n = arr.size();
        int m = arr[0].size();

        int row =0;
        int col =0;

        if(arr.size()*arr[0].size() != r*c){
            return arr;
        }


        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                ans[row][col] = arr[i][j];
                col++;

                if(col == c){
                    col =0;
                    row++;
                }


            }



        }

        return ans;


        
    }
};
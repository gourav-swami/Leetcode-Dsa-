class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {

        int n =arr.size();
        int m = arr[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            dp[j][i]=arr[i][j];
        }
        
    }

    return dp;

   




        
    }
};
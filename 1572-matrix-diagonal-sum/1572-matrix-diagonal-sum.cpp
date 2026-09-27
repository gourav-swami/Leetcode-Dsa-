class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {

        int sum = 0;
        int n = arr.size();
        int m = arr[0].size();

        for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(i == j || i + j == n - 1) {
                sum += arr[i][j];
            }
        }
    }

            return sum ;
        
    }
};
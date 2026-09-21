class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int diff) {


        // ***************** SAME PROBLEM COUNT OF SUBSETSUM WITH GIVEN DIFFERENCE(DP) **********************

        int n = arr.size();
        int sumarr = 0;

        for (int i = 0; i < n; i++) {
            sumarr += arr[i];
        }

        
        
        int sum1 = (diff + sumarr) / 2;
        
        
        if (abs(diff) > sumarr ||(diff + sumarr) % 2 != 0) {
            return 0;
        }

        

        int** t = new int*[n + 1];

        
        for (int i = 0; i < n + 1; i++) {
            t[i] = new int[sum1 + 1];
        }

        
        for (int j = 0; j <= sum1; j++) {
            t[0][j] = 0;
        }

        t[0][0] = 1;

        
        for (int i = 1; i <= n; i++) {

            if (arr[i - 1] == 0) {
                t[i][0] = 2 * t[i - 1][0];
            }
            else {
                t[i][0] = t[i - 1][0];
            }
        }

        
        for (int i = 1; i < n + 1; i++) {

            for (int j = 1; j < sum1 + 1; j++) {

                if (arr[i - 1] <= j) {

                    t[i][j] = t[i - 1][j - arr[i - 1]]
                             + t[i - 1][j];
                }
                else {

                    t[i][j] = t[i - 1][j];
                }
            }
        }

        int ans = t[n][sum1];

        
        for (int i = 0; i < n + 1; i++) {
            delete[] t[i];
        }

        delete[] t;

        return ans;
        
    }
};
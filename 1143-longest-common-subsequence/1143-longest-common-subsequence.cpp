

class Solution {
public:
    int longestCommonSubsequence(string x, string y) {

        int m = x.length();
        int n = y.length();

        int** t = new int*[m+1];

    // 2. Allocate memory for columns in each row
    for (int i = 0; i <= m; ++i) {
        t[i] = new int[n+1];
    }


    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){

            if(i==0||j==0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1] == y[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }

            else{
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }

    return t[m][n];


        
    }
};
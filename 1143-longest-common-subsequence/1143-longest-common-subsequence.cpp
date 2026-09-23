int static t[1001][1001];

class Solution {
public:



   

int longestCommonSubsequence1(string &x, string &y,int n,int m) {

        

        // Base condition

        if(n==0 || m==0){
            return 0;
        }

        if(t[n][m] !=-1){
            return t[n][m];
        }





        if(x[n-1] == y[m-1]){
            
            t[n][m] = 1+longestCommonSubsequence1(x,y,n-1,m-1);
        }

        else{
            t[n][m] = max(longestCommonSubsequence1(x,y,n,m-1) , longestCommonSubsequence1(x,y,n-1,m));
        }


        return t[n][m];


        
    }
    int longestCommonSubsequence(string x, string y) {

        int n = x.length();
        int m = y.length();

         memset(t,-1,sizeof(t));

        int ans = longestCommonSubsequence1(x,y,n,m);
        return ans;

        

        
    }
};
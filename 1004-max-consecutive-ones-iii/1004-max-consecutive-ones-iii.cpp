class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {

        int n = arr.size();

        int maxlen =0;
        int zeros =0;

        int l = 0;
        int r = 0;

        while(r<n){

            if(arr[r] == 0) zeros++;

            while(zeros>k){
                if(arr[l]==0) zeros--;

                l++;
            }

            if(zeros<=k){
                int len = r-l+1;
                maxlen = max(maxlen,len);
            }

            r++;

        }

        return maxlen;




        
        
    }
};
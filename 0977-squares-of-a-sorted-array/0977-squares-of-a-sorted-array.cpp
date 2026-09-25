class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {

        int n = arr.size();

        vector<int> ans ;


        for(int i=0;i<n;i++){
            int x = abs(arr[i]);

            int result = x*x;

            ans.push_back(result);

        }

        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
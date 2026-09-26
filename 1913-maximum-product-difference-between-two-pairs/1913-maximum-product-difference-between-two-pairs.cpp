class Solution {
public:
    int maxProductDifference(vector<int>& arr) {

        int n = arr.size();
        sort(arr.begin(),arr.end());

        int res1 = arr[0]*arr[1];

        int res2 = arr[n-1]*arr[n-2];

        return res2-res1;
        
    }
};
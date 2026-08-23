class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> ans(m + n, 0);
        
        int i = 0;
        int j = 0;
        int k = 0;
        
        // Merge nums1 and nums2 into ans
        while(i < m && j < n) {
            
            if(nums1[i] <= nums2[j]) {
                ans[k] = nums1[i];
                i++;
            }
            else {
                ans[k] = nums2[j];
                j++;
            }
            
            k++;
        }
        
        // Remaining elements of nums1
        while(i < m) {
            ans[k] = nums1[i];
            i++;
            k++;
        }
        
        // Remaining elements of nums2
        while(j < n) {
            ans[k] = nums2[j];
            j++;
            k++;
        }
        
        // Copy ans back into nums1
        for(int i = 0; i < m + n; i++) {
            nums1[i] = ans[i];
        }
    }
};
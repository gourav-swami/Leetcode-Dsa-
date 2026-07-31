class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        int size=nums.size();

        
         vector<int> ans;

         vector<int> v1;
         vector<int> v2;


        



        for(int i=0;i<n;i++){

            v1.push_back(nums[i]);


            // ans.push_back(nums[i]);
            // ans.push_back(nums[n+i]);

        }


        for(int i=n;i<size;i++){
            v2.push_back(nums[i]);
        }


        for(int i = 0; i < n; i++) {
            ans.push_back(v1[i]);
            ans.push_back(v2[i]);
        }


        return ans;

        


        






        
    }
};
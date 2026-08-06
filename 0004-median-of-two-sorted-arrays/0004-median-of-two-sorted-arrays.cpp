class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();


        vector<int> ans;


        for(int i=0;i<n;i++){
            ans.push_back(nums1[i]);

        }


        for(int i=0;i<m;i++){
            ans.push_back(nums2[i]);
            
        }


        sort(ans.begin(),ans.end());

        int k=0;
        for(int i=0;i<ans.size();i++){
            k+=1;
        }


        


        if(k%2==0){

            int mid=k/2;

            int prev=mid-1;

            return (ans[mid]+ans[prev])/2.0;


        }


        else{


            int mid=k/2;

           
            return ans[mid];


        }


        return 0;

        





        
    }
};
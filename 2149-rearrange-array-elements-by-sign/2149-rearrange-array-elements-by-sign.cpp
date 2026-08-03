class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {

        int n=arr.size();

        vector<int> v1;
        vector<int> v2;
        vector<int> ans;
        
        

        for(int i=0;i<n;i++){
            if(arr[i]<0){
                v1.push_back(arr[i]);
            }

            else{
                v2.push_back(arr[i]);
            }
        }


        for(int i = 0; i < v1.size(); i++) {
            ans.push_back(v2[i]);
            ans.push_back(v1[i]);
        }


        return ans;


        
    }
};
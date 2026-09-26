class Solution {
public:
    int arrayPairSum(vector<int>& arr) {

        int n = arr.size();
        sort(arr.begin(),arr.end());

        int sum =0;
        for(int i=0;i<n;i=i+2){
            sum+=arr[i];
        }

        return sum ;


        
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& arr) {
        
        int n = arr.size();

        int curralt =0;
        int maxalt =0;

        for(auto it : arr){
            curralt+=it;
            maxalt = max(maxalt,curralt);
        }

        return maxalt;

    }

};
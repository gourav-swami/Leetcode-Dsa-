class Solution {
public:

    bool allZero(vector<int> &v){

            for(auto it:v){
                if(it==0){
                    return false; 
                }
            }

            return true;

        }
    bool checkIfPangram(string s) {

        vector<int> v(26,0);

        for(char ch:s){
            v[ch-'a']++;

        }


        bool ans = allZero(v);

        return ans;






        
    }
};
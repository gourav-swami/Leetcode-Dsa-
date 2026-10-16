class Solution {
public:

    bool allZero(vector<int> &v){

            for(auto it:v){
                if(it!=0){
                    return false; 
                }
            }

            return true;

        }
    bool isAnagram(string s, string t) {

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // if(s==t) return true;
        // else{
        //     return false;
        // }



        //----> 2nd APPROACH


        vector<int> v(26,0);

        for(char ch:s){
            v[ch-'a']++;

        }

        for(char ch:t){
            v[ch-'a']--;
            
        }


        //check for all the values of vector is equal to zero or not


        // ----> IMPORTANT <------


        bool ans = allZero(v);
        return ans;
    }
};
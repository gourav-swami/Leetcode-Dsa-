class Solution {
public:

    bool isUnique(vector<int>& arr) {
    set<int> st;

    for(int x : arr) {
        if(st.count(x)) {
            return false;
        }

        st.insert(x);
    }

    return true;
}
    bool uniqueOccurrences(vector<int>& arr) {

        map<int,int> mp;
        vector<int> ans;

        int n = arr.size();

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        for(auto it :mp){
            ans.push_back(it.second);
            
        }
        bool res = isUnique(ans);
        return res;


        
    }
};
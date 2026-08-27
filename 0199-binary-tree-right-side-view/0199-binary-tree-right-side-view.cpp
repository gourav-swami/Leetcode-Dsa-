
class Solution {
public:


    void solve(TreeNode* root , vector<int> &ans , int level){
        if(root==NULL){
            return;
        }

        if(level == ans.size()){
            ans.push_back(root->val);
        }

        solve(root->right , ans , level+1); // first call the right part 

        solve(root->left , ans , level+1); // and then left part for the right side view



    }
    vector<int> rightSideView(TreeNode* root) {

        vector<int> ans;

        solve(root,ans,0);

        return ans;

        
        
    }
};

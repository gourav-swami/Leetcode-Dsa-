
class Solution {
public:


    void solve(TreeNode* root , int k , int &count , vector<int> path){

        if(root == NULL){
            return;
        }

        path.push_back(root->val);

        // left call 

        solve(root->left , k , count , path);

        // right call 

        solve(root->right , k , count , path);

        long long int sum =0;

        for(int i = path.size()-1;i>=0;i--){
            sum +=path[i];

            if(sum == k){
                count++;
            }
        }

        path.pop_back();

    }
    int pathSum(TreeNode* root, int k) {

        vector<int> path;

        int count =0;

        solve(root , k , count , path);

        return count;


        
    }
};
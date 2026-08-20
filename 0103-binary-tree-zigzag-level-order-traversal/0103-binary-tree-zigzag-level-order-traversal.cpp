
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result ;

        vector<int> ans;

        if( root == NULL ){

            return result;

        }

        queue<TreeNode*> q;

        q.push(root);

        
        bool leftToright =true;

        while(!q.empty()){

            int size = q.size();

            vector<int> ans(size);

            for( int i=0; i<size; i++){
                TreeNode* forntNode = q.front();
                q.pop();


                int index = leftToright ? i:size-i-1;

                ans[index] = forntNode->val;

                if(forntNode->left){
                    q.push(forntNode->left);
                }


                if(forntNode->right){
                    q.push(forntNode->right);
                }


            }


            leftToright = !leftToright;

            result.push_back(ans);

        }


        return result;


        
    }
};
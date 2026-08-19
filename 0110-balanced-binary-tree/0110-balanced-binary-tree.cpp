
class Solution {
public:


    int height(TreeNode* root) {
        // base case

        if(root == NULL) return -1;

        int h1 = height(root->left);
        int h2 = height(root->right);
        
        int ans =max(h1,h2)+1;

        return ans;// code here
        
    }
    bool isBalanced(TreeNode* root) {

        // base case 

        if( root == NULL){
            return true;

        }

        bool left = isBalanced(root->left);
        bool right =isBalanced(root->right);

        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if(left && right && diff){
            return true;
        }

        else{
            return false;
        }
        
    }
};
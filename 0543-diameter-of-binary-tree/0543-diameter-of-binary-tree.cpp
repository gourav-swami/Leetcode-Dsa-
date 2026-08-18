
class Solution {
public:


    int height(TreeNode* root) {
        // base case

        if(root == NULL) return 0;

        int h1 = height(root->left);
        int h2 = height(root->right);

        int ans =max(h1,h2)+1;

        return ans;// code here

    }

    int diameterOfBinaryTree(TreeNode* root) {

        if(root == NULL){
            return 0;
        }
        
        int op1 = diameterOfBinaryTree(root->left);
        int op2 = diameterOfBinaryTree(root->right);
        int op3 = height(root->left) + height(root->right);
        
        int ans = max(op1,max(op2,op3));
        
        return ans;
  
    }
};
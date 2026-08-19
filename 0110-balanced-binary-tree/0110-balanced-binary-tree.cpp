
class Solution {
public:


    pair<bool,int> isBalancedFast(TreeNode* root){
    
    
    if( root == NULL){
        
        pair<bool,int> p = make_pair(true,0);
        
        return p;
        

    }
    
    pair<bool,int> left = isBalancedFast(root->left);
    pair<bool,int> right = isBalancedFast(root->right);
    
    
    bool leftAns = left.first;
    bool rightAns = right.first;
    
    
    



    bool diff = abs(left.second -right.second) <= 1;
    
    
    pair<bool,int> ans ;
    
    ans.second = max(left.second , right.second) +1;
    

    if(leftAns && rightAns && diff){
         ans.first =1;
    }

    else{
         ans.first =0;
    }
    
    
    return ans;

    
    
}
    bool isBalanced(TreeNode* root) {


        return isBalancedFast(root).first;




        






        // --> this method has time complaxity o(n^2) so we use the optimal approach to reduce geight func calling into pairs

            // base case
       /* if( root == NULL){
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

        */
        
    }
};
class Solution {
public:
    int xorOperation(int n, int start) {

        vector<int> nums(n,0);
        int Xor = 0;


        for(int i = 0; i<nums.size(); i++){
            nums[i] = start+2*i;
            Xor = Xor^nums[i];
        }



        // for(int i=0;i<nums.size();i++){
            
        // }

        return Xor;
        
    }
};
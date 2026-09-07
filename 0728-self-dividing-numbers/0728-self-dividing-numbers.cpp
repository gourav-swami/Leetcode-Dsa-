class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> ans;
        

        for(int i=left;i<=right;i++){

            int x = i;
            bool valid = true;

            while(x>0){
                int digit = x%10;
                x=x/10;

                if(digit ==0 || i%digit != 0){
                   
                    valid = false;
                    break;
                }
            }

            if(valid){

                 ans.push_back(i);

            }
        }

        return ans;


        
    }
};
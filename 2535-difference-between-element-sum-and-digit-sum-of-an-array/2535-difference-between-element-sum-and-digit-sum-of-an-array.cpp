class Solution {
public:
    int differenceOfSum(vector<int>& arr) {

        int n = arr.size();

        int sum1 =0;
        int sum2 = 0;

        for(int i=0;i<n;i++){
            sum1+=arr[i];
        }


        for(int i=0;i<n;i++){
            int x = arr[i];

            while(x>0){
                int digit = x%10;
                sum2+=digit;
                x=x/10;
            }
        }

        return abs(sum1-sum2);
        
    }
};
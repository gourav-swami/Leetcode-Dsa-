class Solution {
public:
    int maxScore(vector<int>& arr, int k) {

        int n= arr.size();

        int leftsum = 0;
        int rightsum = 0;

        int maxsum = 0;

        for(int i =0;i<k;i++){
            leftsum += arr[i];
        }

        maxsum = leftsum ;

        int rightindex = n-1;

        for(int i =k-1;i>=0;i--){
            leftsum = leftsum-arr[i];
            rightsum = rightsum+arr[rightindex];

            rightindex = rightindex -1;
            
            maxsum = max(maxsum,leftsum+rightsum);

        }



        return maxsum;

       







        
    }
};
class Solution {
public:
    bool isMonotonic(vector<int>& arr) {

        bool increasing = false;
        bool decreasing = false;

        int n = arr.size();

        for(int i=0;i<n-1;i++){

            if(arr[i]<arr[i+1]){
                increasing = true;
            }

            else if(arr[i]>arr[i+1]){
                decreasing = true;
            }

        }


        if(increasing == true && decreasing == true){
            return false;
        }


        return true;


        
    }
};
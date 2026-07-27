class Solution {
public:
    int majorityElement(vector<int>& arr) {

        int n=arr.size();

        // we are doing this problem by the moores voting algo


        int cnt=0;

        int ele;

        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                ele=arr[i];

            }

            else if(cnt>0 && arr[i]==ele){
                cnt++;

            }

            else{
                cnt--;

            }

        }


         int cnt1=0;

            for(int i=0;i<n;i++){
                if(arr[i]==ele){
                    cnt1++;
                }
            }

            if(cnt1>(n/2)){
                return ele;

            }

        return -1;
    
    }
};
class Solution {
public:


  int largestRectangleArea(vector<int>& arr) {

    vector<int> left;
    stack<pair<int, int> > s;


    int pseudoindex =-1;

    int n=arr.size();

     for(int i=0;i<n;i++){
        if(s.size()==0){
            left.push_back(pseudoindex);

        }

        else if( s.size()>0 && s.top().first < arr[i]){
            left.push_back(s.top().second);
        }

        else if( s.size()>0 && s.top().first>=arr[i]){

            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }

            if( s.size()==0){
                left.push_back(pseudoindex);
            }

            else{
                left.push_back(s.top().second);
            }

        }

        s.push({arr[i],i});


    }


    
    vector<int> right;
    stack<pair<int, int> > g;

    pseudoindex =n;

        for(  int i=n-1;i>=0;i--){

        if(g.size()==0){
            right.push_back(pseudoindex);

        }

        else if( g.size()>0 && g.top().first < arr[i]){
            right.push_back(g.top().second);
        }

        else if( g.size()>0 && g.top().first>=arr[i]){

            while(g.size()>0 && g.top().first>=arr[i]){
                g.pop();
            }

            if( g.size()==0){
                right.push_back(pseudoindex);
            }

            else{
                right.push_back(g.top().second);
            }

        }

        g.push({arr[i],i});


    }



    reverse(right.begin(), right.end());


      int maxarea=0;
        for(int i=0;i<n;i++){

            int height = arr[i];
            int breadth =right[i]-left[i]-1;

            int area=height*breadth;

            maxarea=max(maxarea,area);
        }



        return maxarea;

  }

    int maximalRectangle(vector<vector<char>>& arr) {

        if(arr.empty()) return 0;


        vector<int> x;

            int n = arr.size();  // usr to  find total no of rows
            int m = arr[0].size();   //use to find total no of columns 

        for( int j=0;j<m;j++){
            x.push_back(arr[0][j]-'0');
        }

        int mx=largestRectangleArea(x);


        for( int i=1;i<n;i++){
            for( int j=0;j<m;j++){
                if( arr[i][j]=='0'){
                    x[j]=0;
                }

                else{
                    x[j]=x[j]+(arr[i][j] -'0');
                }
            }

            mx=max(mx,largestRectangleArea(x));
        }


        return mx;


        
    }
};
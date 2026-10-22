class Solution {
public:

    int findSmallest(vector<int>& arr) {
    int smallest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

    int findGreatest(vector<int>& arr) {
    int greatest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    return greatest;
}


    int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}



    int findGCD(vector<int>& arr) {

        int x = findSmallest(arr);

        int y = findGreatest(arr);

        int z = findGCD(x,y);

        return z;

    
    }
};
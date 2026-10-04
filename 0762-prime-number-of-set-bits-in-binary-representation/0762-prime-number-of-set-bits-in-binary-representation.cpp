class Solution {
public:

    bool isPrime(int n) {
        if(n < 2)
            return false;

        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0)
                return false;
        }

        return true;
    }

    int countPrimeSetBits(int left, int right) {

        int count = 0;

        for(int i = left; i <= right; i++) {

            int n = i;
            int count1 = 0;

            while(n > 0) {
                int bit = n % 2;

                if(bit == 1) {
                    count1++;
                }

                n = n / 2;
            }

            bool ans = isPrime(count1);

            if(ans) {
                count++;
            }
        }

        return count;
    }
};
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        int i = n;

        while(i>0){
            sum += i%10;
            product *= i%10;

            i/=10;
        }

        return product - sum;
    }
};
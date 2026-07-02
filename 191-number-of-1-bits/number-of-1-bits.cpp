class Solution {
public:
    int hammingWeight(int n) {
        
        int count = 0;
        int temp = n;

        while(temp!=0){
            if(temp % 2 == 1) count++;

            temp/=2;
        }

        return count;
    }
};
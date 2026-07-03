class Solution {
public:
    int bitwiseComplement(int n) {
        
        int ans = 0 , i = 0;

        if(n==0) return 1;

        while(n!=0){
           int bit = n & 1;

           // Complement Digit
           if(bit) bit = 0;
           else bit = 1;

           ans = bit*pow(2,i) + ans;
           i++;
           n/=2;
        }

        return ans;
    }
};
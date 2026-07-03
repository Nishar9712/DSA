class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ans = false;
        int a = 1;
        
        for(int i=0; i<=30; i++){
            
            if (a == n) ans = true;

            if (a < INT_MAX/2) 
                a *=2;
        }

        return ans;
    }
};
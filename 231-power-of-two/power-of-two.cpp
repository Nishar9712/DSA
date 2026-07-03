class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ans = false;
        
        for(int i=0; i<=30; i++){
            
            if(n == pow(2,i)) ans = true;
        }

        return ans;
    }
};
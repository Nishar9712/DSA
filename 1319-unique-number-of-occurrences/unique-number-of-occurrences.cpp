class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> s;
        s.insert(arr.begin(), arr.end());
        
        int size = s.size();
        vector<int> count(s.size(), 0);
        
        for(int i=0; i<arr.size(); i++){
            int j=0;
            for(auto it = s.begin(); it != s.end(); ++it){
                
                if(arr[i] == *it){
                    count[j]++;
                    break;
                }
                j++;
            }
        }
        
        set<int> uniqueSet;
        int d = 0;

        for (int i = 0; i < size; i++) {
            if (uniqueSet.find(count[i]) != uniqueSet.end()) {
                d++;
            }
            else {
                uniqueSet.insert(count[i]);
            }
        }
        
        if(d) return false;
        else return true;
    }
};
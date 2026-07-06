class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) { 
        vector<int> ans;

        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int i=0, j=i+1;
        while(j<n){
            if(nums[i] == nums[j] && j<n){
                ans.push_back(nums[i]);
                i+=2;
                j= i+1;
                continue;
            }
            i++;
            j++;
        }
        
        return ans;
    }
};
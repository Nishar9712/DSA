class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans = {};

        for(int i=0; i<= size(nums)-3; i++){
            if (i!= 0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = size(nums)-1;

            while(left<right){
                if(i == left && i == right && left == right) continue;

                if(left != i+1 && nums[left] == nums[left-1]){
                    left++;
                    continue;
                }

                if(right != size(nums)-1 && nums[right] == nums[right+1]){
                    right--;
                    continue;
                }

                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                    ans.insert(ans.end(), {nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if(sum<0) left++;
                else right--;
            }
        }

        return ans;
    }
};
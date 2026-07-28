class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;

        for(int k = nums.size()-1; k>1; k--){
            int left = 0, right = k-1, V = nums[k];

            while(left < right){
                int sum = nums[left] + nums[right];

                if(sum > V){
                    count += right - left;
                    right--;
                }
                else left++;
            }
        }

        return count;
    }
};
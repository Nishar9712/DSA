class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans = {};

        for(int i=0; i <= size(nums) - 3; i++){

            if (i > 0 && nums[i] == nums[i-1]) continue;
            if(nums[i] > 0) break;

            int j = i+1;
            int k = size(nums)-1;

            while(j < k){

                if(i == j && i == k && j == k) continue;

                if(j != i+1 && nums[j] == nums[j-1]){
                    j++;
                    continue;
                }

                if(k != size(nums)-1 && nums[k] == nums[k+1]){
                    k--;
                    continue;
                }

                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0){
                    ans.insert(ans.end(), {nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }

        return ans;
    }
};

const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}
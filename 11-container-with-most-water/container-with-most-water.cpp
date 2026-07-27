class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;

        int left = 0, right = size(height) -1;

        while(left < right){
            int area = (right - left) * min(height[left], height[right]);

            if (area > max) max = area;

            if (height[left] > height[right]) right--;
            else left++;
        }

        return max;
    }
};
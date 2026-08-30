class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;                      // start pointer
        int right = heights.size() - 1;     // end pointer
        int maxWater = 0;

        while (left < right) {
            // calculate current water
            int h = min(heights[left], heights[right]);
            int w = right - left;
            int area = h * w;

            // update maximum
            maxWater = max(maxWater, area);

            // move the smaller height
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};

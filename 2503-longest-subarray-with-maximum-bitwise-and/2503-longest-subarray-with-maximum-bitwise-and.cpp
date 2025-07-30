class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int maxLen = 0, count = 0;

        for (int num : nums) {
            if (num == maxVal) {
                count++;
                maxLen = max(maxLen, count);
            } else {
                count = 0;
            }
        }

        return maxLen;
    }
};

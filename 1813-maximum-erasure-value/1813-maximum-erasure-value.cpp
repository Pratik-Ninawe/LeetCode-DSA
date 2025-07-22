class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> seen;
        int left = 0, right = 0;
        int currentSum = 0, maxSum = 0;

        while (right < nums.size()) {
            while (seen.find(nums[right]) != seen.end()) {
                seen.erase(nums[left]);
                currentSum -= nums[left];
                left++;
            }
            seen.insert(nums[right]);
            currentSum += nums[right];
            maxSum = max(maxSum, currentSum);
            right++;
        }

        return maxSum;
    }
};

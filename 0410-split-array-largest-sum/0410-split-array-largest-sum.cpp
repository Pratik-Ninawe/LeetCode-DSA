class Solution {
public:
    bool canSplit(const vector<int>& nums, int k, int maxSum) {
        int subarrays = 1, currentSum = 0;
        
        for (int num : nums) {
            currentSum += num;
            if (currentSum > maxSum) {
                subarrays++;
                currentSum = num;
                if (subarrays > k) return false;
            }
        }
        
        return true;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canSplit(nums, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};

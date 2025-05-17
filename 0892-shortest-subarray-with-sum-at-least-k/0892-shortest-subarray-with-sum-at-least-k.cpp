class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        // int sum=0,cnt=0;
        // if(find(nums.begin(),nums.end(),k)!=nums.end()) return 1;
        // for(int it:nums){
        //     sum+=it;
        //     cnt++;
        //     if(sum==k)  return cnt;
        //     else{
        //         if(sum<0)   {
        //             sum=0;cnt=0;
        //         }
        //     }
        // }
        // return -1;

        int n = nums.size();
        vector<long long> prefixSum(n + 1, 0);  // Initialize prefix sum array
        
        // Step 1: Compute the prefix sum array
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
        
        int minLength = INT_MAX;  // To track the shortest length
        
        // Step 2: Use a deque to find the shortest subarray with sum at least k
        deque<int> dq;
        
        for (int i = 0; i <= n; i++) {
            // Try to find subarrays with sum >= k
            while (!dq.empty() && prefixSum[i] - prefixSum[dq.front()] >= k) {
                minLength = min(minLength, i - dq.front());  // Update the result with the shortest length
                dq.pop_front();  // Pop the front since we've found a valid subarray
            }
            
            // Maintain the deque with indices where the prefix sum is increasing
            while (!dq.empty() && prefixSum[i] <= prefixSum[dq.back()]) {
                dq.pop_back();
            }
            
            dq.push_back(i);  // Add the current index to the deque
        }
        
        // Return the result if we found a valid subarray, otherwise return -1
        return minLength == INT_MAX ? -1 : minLength;

    }
};
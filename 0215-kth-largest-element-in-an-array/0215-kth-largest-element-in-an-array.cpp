class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // sort(nums.rbegin(),nums.rend());
        // return nums[k-1];

        // priority_queue<int> heap(nums.begin(), nums.end());
        // while (--k) heap.pop();
        // return heap.top();

        priority_queue<int> pq(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++) {
            pq.pop();
        }
        return pq.top();
    }
};
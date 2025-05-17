class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> output(n);
        
        for (int i = 0; i < n; ++i) {
            output[(i + k) % n] = nums[i];
        }
        
        nums = output;
        
        for (int i = 0; i < n; ++i) {
            cout << output[i] << " ";
        }
    }
};

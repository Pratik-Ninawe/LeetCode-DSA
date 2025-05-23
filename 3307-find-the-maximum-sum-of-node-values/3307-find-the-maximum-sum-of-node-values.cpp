class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum = 0;
        vector<long long> res;
        for (int x : nums) {
            sum += x;
            int y = x ^ k;
            res.push_back(y - x);
        }
        sort(res.begin(), res.end());
        reverse(res.begin(), res.end());
        
        for (int i = 0; i < res.size() - 1; i += 2) {
            if (res[i] + res[i + 1] <= 0) break;
            sum += res[i] + res[i + 1];
        }
        return sum;
    }
};
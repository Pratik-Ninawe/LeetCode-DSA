#include <vector>
using namespace std;

class Solution {
public:
    bool isZeroArray(vector<int>& nums, const vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> delta(n + 1, 0);

        // Apply range increments using difference array
        for (const auto& q : queries) {
            int l = q[0];
            int r = q[1];
            delta[l]++;
            if (r + 1 < n) delta[r + 1]--;
        }

        // Build prefix sum array to get final increment count at each index
        vector<int> newDelta(n, 0);
        newDelta[0] = delta[0];
        for (int i = 1; i < n; i++) {
            newDelta[i] = newDelta[i - 1] + delta[i];
        }

        // Apply the reverse transformation
        for (int i = 0; i < n; i++) {
            int reduced = nums[i] - newDelta[i];
            if (reduced > 0) return false;
        }

        return true;
    }
};
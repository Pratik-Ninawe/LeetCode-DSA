class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> v;
        int count = 1;
        for (int i = 0; i < n; i++) {
            v.push_back(count);
            if (count * 10 <= n) {
                count *= 10;  // Go deeper (e.g., 1 -> 10)
            } else {
                if (count >= n) count /= 10;  // Go up if at the limit
                count++;
                while (count % 10 == 0) count /= 10;  // Remove trailing zeros
            }
        }
        return v;
    }
};
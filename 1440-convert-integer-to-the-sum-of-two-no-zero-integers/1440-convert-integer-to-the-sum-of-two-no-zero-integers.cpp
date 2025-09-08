class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++) {
            int left = i;
            int right = n - i;
            if (!containsZero(left) && !containsZero(right)) {
                return {left, right};
            }
        }
        return {};
    }

    bool containsZero(int n) {
        string str = to_string(n);
        return str.find('0') != string::npos;
    }
};
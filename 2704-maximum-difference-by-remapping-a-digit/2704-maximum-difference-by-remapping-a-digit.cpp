class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string maxStr = s;
        for (char c : s) {
            if (c != '9') {
                for (char &ch : maxStr) {
                    if (ch == c) ch = '9';
                }
                break;
            }
        }

        string minStr = s;
        for (char c : s) {
            if (c != '0') {
                for (char &ch : minStr) {
                    if (ch == c) ch = '0';
                }
                break;
            }
        }

        int maxVal = stoi(maxStr);
        int minVal = stoi(minStr);

        return maxVal - minVal;
    }
};
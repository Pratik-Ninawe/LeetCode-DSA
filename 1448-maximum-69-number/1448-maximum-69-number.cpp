class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '6') {
                s[i] = '9'; // Change the first '6' to '9'
                break;      // Only one change allowed
            }
        }
        return stoi(s);     
    }
};
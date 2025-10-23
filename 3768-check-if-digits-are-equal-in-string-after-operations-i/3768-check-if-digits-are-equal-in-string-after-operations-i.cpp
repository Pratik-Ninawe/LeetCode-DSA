class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {  
            string k = "";
            for (int i = 0; i < s.size() - 1; i++) { 
                int sum = (s[i] - '0' + s[i + 1] - '0') % 10;
                k += to_string(sum);
            }
            s = k;  
        }
        return s[0]==s[1];  
    }
};
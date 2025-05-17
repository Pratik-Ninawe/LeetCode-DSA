class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int n = s.size();
        int start = 0, maxLen = 1;
        
        for (int i = 0; i < n; i++) {
            // Odd length palindromes
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
            
            // Even length palindromes
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        }
        
        return s.substr(start, maxLen);
    }
};
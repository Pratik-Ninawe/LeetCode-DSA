class Solution {
public:
    string reverseWords(string s) {
        string output;
        int n = s.length();
        int i = n - 1;
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            if (i < 0) break;
            string word = "";
            while (i >= 0 && s[i] != ' ') {
                word += s[i];
                i--;
            }
            reverse(word.begin(), word.end());
            if (!output.empty()) {
                output += " ";
            }
            output += word;
        }
        return output;
    }
};

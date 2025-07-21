class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size())
            return false;

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string w = words[i];

            if (charToWord.count(c)) {
                if (charToWord[c] != w)
                    return false;
            } else {
                if (wordToChar.count(w))
                    return false;

                charToWord[c] = w;
                wordToChar[w] = c;
            }
        }

        return true;
    }
};
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordFreq1;
        unordered_map<string, int> wordFreq2;
        
        vector<string> sen1Words = split(s1);
        vector<string> sen2Words = split(s2);
        
        for (const auto& word : sen1Words) {
            wordFreq1[word] += 1;
        }
        
        for (const auto& word : sen2Words) {
            wordFreq2[word] += 1;
        }
        
        vector<string> uncommons;
        
        for (const auto& entry : wordFreq1) {
            string word = entry.first;
            int wordFreq = entry.second;
            if (wordFreq == 1 && wordFreq2.find(word) == wordFreq2.end()) {
                uncommons.push_back(word);
            }
        }
        
        for (const auto& entry : wordFreq2) {
            string word = entry.first;
            int wordFreq = entry.second;
            if (wordFreq == 1 && wordFreq1.find(word) == wordFreq1.end()) {
                uncommons.push_back(word);
            }
        }
        
        return uncommons;
    }

private:
    vector<string> split(const string& str) {
        vector<string> result;
        string word;
        for (char ch : str) {
            if (ch == ' ') {
                if (!word.empty()) {
                    result.push_back(word);
                    word.clear();
                }
            } else {
                word += ch;
            }
        }
        if (!word.empty()) {
            result.push_back(word);
        }
        return result;
    }
};
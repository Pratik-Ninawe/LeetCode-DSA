class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> last_occurrence;
        for (int i = 0; i < s.size(); i++) {
            last_occurrence[s[i]] = i;
        }

        vector<int> result;
        int start = 0, end = 0;

        for (int i = 0; i < s.size(); i++) {
            end = max(end, last_occurrence[s[i]]);
            if (i == end) {
                result.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return result;
    }
};
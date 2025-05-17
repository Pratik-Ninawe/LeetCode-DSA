class Solution {
public:
    string frequencySort(string s) {
        map<char, int> m;
        string output;
        
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }
        vector<pair<int,char>> freq;

        for(auto it:m){
            freq.push_back({it.second, it.first});
        }
        sort(freq.rbegin(),freq.rend());

        for(auto it:freq){
            output.append(it.first,it.second);
        }

        return output;
    }
};

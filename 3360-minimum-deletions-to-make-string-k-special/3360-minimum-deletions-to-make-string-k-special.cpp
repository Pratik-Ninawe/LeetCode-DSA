class Solution {
public:
    int minimumDeletions(string word, int k) {
        int n = word.size();
        vector<int> freq(26, 0);
        for(char c : word) freq[c - 'a']++;
        vector<int> m;
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > 0) m.push_back(freq[i]);
        }
        sort(m.begin(), m.end());
        int ans = INT_MAX;
        for(int i = 0; i < m.size(); i++)
        {
            int b = m[i];
            int cnt = 0;
            for(int j = 0; j < m.size(); j++)
            {
                if(m[j] < b) cnt += m[j];
                else if(m[j] > b + k) cnt += m[j] - (b + k);
            }
            ans = min(ans, cnt);
        }
        return ans;
    }
};
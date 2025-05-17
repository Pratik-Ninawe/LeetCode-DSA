class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> mp;
        int count = 0;
        for (auto& d : dominoes) {
            int a = min(d[0], d[1]), b = max(d[0], d[1]);
            mp[{a, b}]++;
        }
        for (auto& it : mp) {
            count += it.second * (it.second - 1) / 2;
        }
        return count;
    }
};
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int i = 0;
        int maxi1 = INT_MIN;

        for (int j = 0; j < fruits.size(); j++) {
            mp[fruits[j]]++;

            while (mp.size() > 2) {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }

            maxi1 = max(maxi1, j - i + 1);
        }

        return maxi1;
    }
};

class Solution {
public:
    const int MOD = 1e9 + 7;

    int possibleStringCount(string word, int k) {
        if (word.empty()) return 0;

        vector<int> groups;
        int count = 1;

        for (int i = 1; i < word.size(); i++) {
            if (word[i] == word[i - 1])
                count++;
            else {
                groups.push_back(count);
                count = 1;
            }
        }
        groups.push_back(count);

        long total = 1;
        for (int g : groups)
            total = (total * g) % MOD;

        if (k <= groups.size()) return total;

        vector<int> dp(k, 0);
        dp[0] = 1;

        for (int g : groups) {
            vector<int> new_dp(k, 0);
            long sum = 0;
            for (int s = 0; s < k; s++) {
                if (s > 0)
                    sum = (sum + dp[s - 1]) % MOD;
                if (s > g)
                    sum = (sum - dp[s - g - 1] + MOD) % MOD;
                new_dp[s] = sum;
            }
            dp = new_dp;
        }

        long invalid = 0;
        for (int s = groups.size(); s < k; s++)
            invalid = (invalid + dp[s]) % MOD;

        return (total - invalid + MOD) % MOD;
    }
};
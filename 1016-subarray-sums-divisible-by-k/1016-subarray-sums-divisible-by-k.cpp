class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int, int> remainders;
    remainders[0] = 1;

    int currentSum = 0;
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];
        int remainder = currentSum % k;

        if (remainder < 0) {
            remainder += k;
        }

        cnt += remainders[remainder];
        remainders[remainder]++;
    }

    return cnt;
    }

};
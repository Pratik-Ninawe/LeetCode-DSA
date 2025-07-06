class FindSumPairs {
public:
    vector<int> num1, num2;
    unordered_map<int, int> freq;

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        num1 = nums1;
        num2 = nums2;
        for (int n : num2) freq[n]++;
    }

    void add(int index, int val) {
        freq[num2[index]]--;
        num2[index] += val;
        freq[num2[index]]++;
    }

    int count(int tot) {
        int res = 0;
        for (int n : num1)
            res += freq[tot - n];
        return res;
    }
};
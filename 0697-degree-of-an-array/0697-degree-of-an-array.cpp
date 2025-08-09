class Solution {
public:
    int findShortestSubArray(vector<int>& A) {
        unordered_map<int, int> count, first;
        int res = 0, degree = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (first.count(A[i]) == 0) first[A[i]] = i;
            if (++count[A[i]] > degree) {
                degree = count[A[i]];
                res = i - first[A[i]] + 1;
            } else if (count[A[i]] == degree)
                res = min(res, i - first[A[i]] + 1);
        }
        return res;
    }
};
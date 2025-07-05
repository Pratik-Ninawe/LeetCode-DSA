class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        int n = intervals.size();

        for (int i = 0; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            while (i + 1 < n && end >= intervals[i + 1][0]) {
                end = max(end, intervals[i + 1][1]);
                i++;
            }

            output.push_back({start, end});
        }

        return output;
    }
};

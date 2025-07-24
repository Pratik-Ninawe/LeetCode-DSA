class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        sort(intervals.begin(), intervals.end());
        int r = intervals.size();
        output.push_back({intervals[0][0], intervals[0][1]});
        int j = 0;
        for (int i = 1; i < r; i++) {
            if (intervals[i][0] <= output[j][1]) {
                output[j][1] = max(output[j][1], intervals[i][1]);
            } else {
                output.push_back({intervals[i][0], intervals[i][1]});
                j++;
            }
        }
        return output;
    }
};

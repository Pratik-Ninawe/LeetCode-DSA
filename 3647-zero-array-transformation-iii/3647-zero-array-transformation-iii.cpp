class Solution
{
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries)
    {
        int n = nums.size();
        int m = queries.size();

        vector<int> workload(n + 1, 0);  // Difference array
        sort(queries.begin(), queries.end());

        priority_queue<int> available;
        int qIndex = 0;

        for (int time = 0; time < n; ++time)
        {
            if (time > 0)
            {
                workload[time] += workload[time - 1];
            }

            // Load queries that start at this time
            while (qIndex < m && queries[qIndex][0] == time)
            {
                available.push(queries[qIndex][1]);
                ++qIndex;
            }

            // Assign queries until we meet nums[time]
            while (workload[time] < nums[time])
            {
                if (available.empty() || available.top() < time)
                {
                    return -1;
                }

                workload[time]++;
                workload[available.top() + 1]--;
                available.pop();
            }
        }

        return available.size(); // Remaining unused queries
    }
};
class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        vector<int> count(121, 0);
        for (int age : ages) {
            count[age]++;
        }

        int cnt = 0;
        for (int ageA = 15; ageA <= 120; ageA++) {
            if (count[ageA] == 0) continue;

            for (int ageB = 15; ageB <= 120; ageB++) {
                if (count[ageB] == 0) continue;

                if (ageB <= 0.5 * ageA + 7) continue;
                if (ageB > ageA) continue;
                if (ageB > 100 && ageA < 100) continue;

                if (ageA == ageB) {
                    cnt += count[ageA] * (count[ageA] - 1); 
                } else {
                    cnt += count[ageA] * count[ageB];
                }
            }
        }
        return cnt;
    }
};

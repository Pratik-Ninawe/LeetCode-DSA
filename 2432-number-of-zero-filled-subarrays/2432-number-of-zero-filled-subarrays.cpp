class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0 , s=0;
        for(int i : nums){
            if(i == 0) {
                s++;
                cnt+=s;
            }
            else{
                s=0;
            }
        }
        return cnt;
    }
};
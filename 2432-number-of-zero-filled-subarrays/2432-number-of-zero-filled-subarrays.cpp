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
        // int a=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i] == 0){
        //         a++;
        //     }

        // }
    }
};
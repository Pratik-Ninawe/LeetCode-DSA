class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            int s1=0,s2=0;
            for(int j=0;j<i;j++){
                s1+=nums[j];
            }
            for(int k=i;k<nums.size();k++){
                s2+=nums[k];
            }
            if(abs(s2-s1) % 2 == 0)
                cnt++;
        }
        return cnt;
    }
};
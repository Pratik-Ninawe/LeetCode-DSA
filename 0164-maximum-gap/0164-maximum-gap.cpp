class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi=INT_MIN;
        if(nums.size()<2)   return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(maxi,nums[i+1]-nums[i]);
        }
        // if(maxi=INT_MIN)  return 0;
        return maxi;
    }
};
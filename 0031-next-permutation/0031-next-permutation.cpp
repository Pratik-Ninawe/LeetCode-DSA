class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int pivot=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        reverse(nums.begin()+pivot+1,nums.end());
    }
};
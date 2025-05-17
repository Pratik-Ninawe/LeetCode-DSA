class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int left=0, right=nums.size()-1;
        // int mid;
        // while(left<=right){
        //     mid = (left + right)/2;
        //     if(nums[mid]==target)   return mid;
        //     else if (nums[mid]>target) right=mid-1;
        //     else    left=mid+1;
        // }
        // return left;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target) return i;
        }
        return nums.size();
    }
};
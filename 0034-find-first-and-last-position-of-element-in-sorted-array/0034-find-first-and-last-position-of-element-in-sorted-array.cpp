class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=-1;
        int end=-1;
        vector<int> output;
        if(nums.size()==0){
            return {-1,-1};
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                start=i;
                break;
            }
        }
        output.push_back(start);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                end=i;
            }
        }
        output.push_back(end);
        return output;
    }
};
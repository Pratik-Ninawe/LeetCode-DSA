class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int flag=0;
        int maxi=INT_MIN;
        int index;
        for(int i=0;i<nums.size();i++){
            if(maxi <= nums[i]){
                maxi=nums[i];
                index=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(2 * nums[i] > maxi && i != index){
                return -1;
            }
            
        }
        return index;
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && i+1<nums.size() && i+2<nums.size()){
                nums[i]=1;
                if(nums[i+1]==0)  nums[i+1]=1;
                else nums[i+1]=0;
                if(nums[i+2]==0)    nums[i+2]=1;
                else nums[i+2]=0;
                cnt++;
            }
           
        }
        if(find(nums.begin(),nums.end(), 0) != nums.end()){
            return -1;
        }
        
        else return cnt;
    }
};
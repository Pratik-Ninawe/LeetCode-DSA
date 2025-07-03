class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> output;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second > floor(nums.size()/3)){
                output.push_back(it.first);
            }
        }
        return output;
    }
};
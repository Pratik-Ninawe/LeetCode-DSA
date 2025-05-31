class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int,int> mp;
        vector< vector<int> > v(n+1);
        vector<int>res;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto [key,count] : mp){
            v[count].push_back(key);
        }
        int count=0;
        for(int i=n; i>=0 && count<k; i--){
           for(int x:v[i]){
            res.push_back(x);
            count++;
           }  
        }
        return res;
    }
};
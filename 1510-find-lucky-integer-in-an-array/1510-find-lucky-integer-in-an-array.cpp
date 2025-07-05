class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int maxi=-1;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second==it.first)
                maxi=max(maxi,it.first);
        }
        return maxi;
        // return -1;
    }
};
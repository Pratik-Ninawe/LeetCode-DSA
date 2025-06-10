class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mpp;

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        int maxi;
        int even=INT_MAX;
        int odd=INT_MIN;
        for(auto it : mpp){
            maxi=INT_MIN;
            if(it.second % 2 == 0){
                even=min(even,it.second);
            }
            if(it.second % 2 != 0){
                odd=max(odd,it.second);
            }
            // maxi=max(odd - even,maxi);
        }
        return odd-even;
    }
};
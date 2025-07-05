class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size() ; 
        vector<vector<string>>ans ; 
        unordered_map<string , vector<string>>mpp ; 
        for(int i = 0; i<n ; i++){
            string temp = strs[i]   ;
            sort(temp.begin() , temp.end()) ;
            mpp[temp].push_back(strs[i]) ; 
        }
         for(auto it:mpp){
            ans.push_back(it.second) ; 
         }
         return ans ; 

    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans="";
        string start=strs[0];
        string end=strs[strs.size()-1];

        for(int i=0;i<min(start.length(), end.length());i++){
            if(start[i]==end[i])    ans+=start[i];
            else
                break;
        }
        return ans;
    }
};
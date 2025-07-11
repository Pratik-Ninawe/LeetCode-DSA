class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string a=strs[0];
        string b=strs[n-1];
        for(int i=0;i<min(a.length(),b.length());i++){
            if(a[i]==b[i])  s+=a[i];
            else    break;
        }
        return s;

    }
};
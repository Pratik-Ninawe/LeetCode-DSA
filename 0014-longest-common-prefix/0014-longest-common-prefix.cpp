class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        // if(strs.empty())   return s;
        // int k=0;
        // int mini=INT_MAX;
        // for(int i=0;i<strs.size();i++){
        //     if(mini>strs[i].length())
        //         mini=strs[i].length();
        // }
        // while(k<mini){
        //     char c=strs[0][k];
        //     for(int j=1;j<strs.size();j++){
        //         if(strs[j][k] != c)
        //             return s;
        //     }
        //     k++;
        //     s.push_back(c);
        // }
        // return s;
        int l=strs.size();
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[l-1];
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i])
                s+=a[i];  
            else
                break;
        }
        return s;
    }
};
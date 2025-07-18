class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
        for(int i=0;i<s.length();i++){
            if(!isalnum(s[i])){
                continue;
            }
            else{
                p+=tolower(s[i]);
            }
        }
        reverse(p.begin(), p.end());
        // cout<<p;
        // return p==s; 
        int i=0;
        int j=p.length()-1;

        while(i<j){
            if(p[i]==p[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
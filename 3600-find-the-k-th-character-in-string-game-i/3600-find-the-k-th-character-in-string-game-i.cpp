class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size()<k){
            string t = "";
            int i=0;
            while(i<s.size()){
                if(s[i]=='z')
                t+='a';
                else
                t+=s[i]+1;
                i++;
            }
            s+=t;
        }

        return s[k-1];
    }
};
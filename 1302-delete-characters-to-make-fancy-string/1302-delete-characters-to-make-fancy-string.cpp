class Solution {
public:
    string makeFancyString(string s) {
        string output="";
        int cnt=1;
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
                cnt++;
            }
            else{
                cnt=1;
            }
            if(cnt<3){
                output+=s[i];
            }
        }
        return s[0]+output;
    }
};
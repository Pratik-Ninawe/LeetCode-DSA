class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(int i=0;i<s.length();i++){
            if(s[i] == '#' && !st1.empty()){
                st1.pop();
            }
            else if(s[i] == '#' && st1.empty()) continue;
            else{
                st1.push(s[i]);
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i] == '#' && !st2.empty()){
                st2.pop();
            }
            else if(t[i] == '#' && st2.empty())    continue;
            else{
                st2.push(t[i]);
            }
        }
        return st1==st2;
    }
};
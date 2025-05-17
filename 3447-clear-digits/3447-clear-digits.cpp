class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string result="";
        for(char c : s){
            if(isdigit(c)){
                if(!st.empty() && !isdigit(st.top())){
                    st.pop();
                }
            }
            else{
                st.push(c);
            }
        }
        while(!st.empty()){
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
};
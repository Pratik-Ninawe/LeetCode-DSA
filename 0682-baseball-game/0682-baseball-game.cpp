class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i=0;i<operations.size();i++){
            if(operations[i] == "+"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.push(top1);
                st.push(top1+top2);
            }
            else if(operations[i] == "D"){
                st.push(2*st.top());
            }
            else if(operations[i] == "C"){
                st.pop();
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
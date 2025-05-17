// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//         unordered_map<char,int> mp;
//         for(int i=0;i<s.length();i++){
//             mp[s[i]]++;
//         }
//         // stirng s="";
//         for(auto it : mp){
//             if(it.second==k){
//                 while(s.find(it.first) != string::npos){
//                     s.erase(s.find(it.first),k);
//                 }
//             }
//         }
        
//         return s;
//     }
// };
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stack;
        
        for (int i = 0; i < s.length(); i++) {
            if (stack.empty() || stack.back().first != s[i]) {
                stack.push_back({s[i], 1});
            } else {
                stack.back().second++;
                if (stack.back().second == k) {
                    stack.pop_back();
                }
            }
        }
        string result = "";
        for (auto& p : stack) {
            result += string(p.second, p.first);
        }
        
        return result;
    }
};

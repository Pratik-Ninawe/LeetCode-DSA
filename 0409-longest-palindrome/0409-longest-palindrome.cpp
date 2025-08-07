class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int cntOdd=0;
        int cntEven=0;
        for(auto it : mp){
            if(it.second % 2 != 0)    cntOdd++;
            
            cntEven+=2*(it.second/2);
        }
        if(cntOdd>=1)   return cntEven+1;
        else    return cntEven;
    }
};
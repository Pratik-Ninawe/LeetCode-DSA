class Solution {
public:
    int maxRepeating(string sequence, string word) {
        
        int cnt=0;
        string s=word;
        while(sequence.find(s) != string::npos){
            cnt++;
            s += word;    
        }
        return cnt;
    }
};
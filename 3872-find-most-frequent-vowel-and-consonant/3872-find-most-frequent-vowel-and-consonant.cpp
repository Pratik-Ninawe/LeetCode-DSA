class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mpp;

        for(char c : s){
            mpp[c]++;
        }
        int v_max=0;
        int c_max=0;
        for(auto it : mpp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u'){
                v_max=max(v_max, it.second);
            }
            else{
                c_max = max(c_max, it.second);
            }
        }
        return c_max + v_max;
    }
};
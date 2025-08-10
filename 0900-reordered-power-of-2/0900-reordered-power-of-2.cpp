class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end()); 

        // ^9 is limit
        for (int i = 0; i < 31; i++) {
            int power = 1 << i;
            string p = to_string(power);
            sort(p.begin(), p.end()); 
            if (s == p) return true;   
        }
        return false;
    }
};
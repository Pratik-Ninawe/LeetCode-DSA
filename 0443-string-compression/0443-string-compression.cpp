class Solution {
public:
    int compress(vector<char>& chars) {
        
        int idx=0;
        for(int i=0;i<chars.size();i++){
            char c=chars[i];
            int cnt=0;

            while(i<chars.size() && chars[i]==c){
                cnt++;
                i++;
            }
            if(cnt==1){
                chars[idx++]=c;
            }
            else{
                chars[idx++]=c;
                string s=to_string(cnt);
                for(char c : s)
                    chars[idx++]=c;

            }
            i--;
        }
        // chars.resize(--idx);
        return idx;
    }
};
class Solution {
public:
    int maxDiff(int num) {
        string str = to_string(num);
        string mini = str;
        string maxi = str;
        char ch = 'a';
        for(int i = 0; i < maxi.size(); i++){
            if(maxi[i] != '9'){
                ch = maxi[i];
                break;
            }
        }
        for(int i = 0; i < maxi.size(); i++){
            if(maxi[i] == ch) maxi[i] = '9';
        }
        
        ch = 'a';

        if(str[0] == '1'){
            for(int i = 0; i < mini.size(); i++){
                if(mini[i] != '1' && mini[i] > '0'){
                    ch = mini[i];
                    break;
                }
            }
        }
        else{
            for(int i = 0; i < mini.size(); i++){
                if(mini[i] > '1'){
                    ch = mini[i];
                    break;
                }
            }
        }
        
        for(int i = 0; i < mini.size() && ch != 'a' ; i++){
            if(mini[i] == ch) mini[i] = str[0] == '1' ? '0' : '1';
        }

        int min_num = stoi(mini);
        int max_num = stoi(maxi);
        return (max_num - min_num);
    }
};
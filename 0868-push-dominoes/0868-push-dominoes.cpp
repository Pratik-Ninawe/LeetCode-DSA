class Solution {
public:
    static string pushDominoes(string dominoes) {
        const int n=dominoes.size();
        vector<int> L(n);
        int F=0;
        for(int i=n-1; i>=0; i--){
            const char c=dominoes[i];
            switch(c){
                case 'L': F=n; break;
                case 'R': F=0; break;
                case '.': F-=(F>0);
            }
            L[i]=F;
        }
        F=0;
        for(int i=0; i<n; i++){
            char& c=dominoes[i];
            switch(c){
                case 'L': F=0; break;
                case 'R': F=n; break;
                case '.': 
                    F-=(F>0);
                    if (F>L[i]) c='R';
                    else if (F<L[i]) c='L';
            }
        }
        return dominoes;
    }
};
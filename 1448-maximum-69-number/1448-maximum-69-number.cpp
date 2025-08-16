class Solution {
public:
    int maximum69Number (int num) {
        constexpr int three10[5]={0, 3, 30, 300, 3000};
        int a=-1;
        for(int n=num, d=0; n>0; n/=10, d++) {
            int r=n%10;
            if (r==6) a=d;
        }
        return num+three10[a+1];     
    }
};
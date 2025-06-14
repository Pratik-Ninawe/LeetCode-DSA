class Solution {
public:
    int arrangeCoins(int n) {
        long long sum=0;
        for(long long i=1;i<LLONG_MAX;i++){
            sum+=i;
            if(sum>n){
                return i-1;
            }
            if(sum==n)  return i;
        }
        return -1;
    }
};
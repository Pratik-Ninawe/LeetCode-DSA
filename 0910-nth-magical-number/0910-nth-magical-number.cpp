class Solution {
public:
    long long gcd(long long a,long long b){
        if(b==0) return a;
        return gcd(b,a%b);
    }

    long long lcm(long long a,long long b){
        return a*b/gcd(a,b);
    }

    int nthMagicalNumber(int n, int a, int b) {
        long long s = 1;
        long long e = 1e18;
        long long mod = 1e9 + 7;
        
        while(s<e){
            long long mid = s+(e-s)/2;
            long long count = mid/a+mid/b-mid/lcm(a,b);
            if(count<n){
                s = mid+1;
            } 
            else{
                e = mid;
            }
        }
        return s%mod;
    }
};
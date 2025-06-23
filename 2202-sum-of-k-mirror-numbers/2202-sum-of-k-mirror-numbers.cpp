typedef long long ll;
class Solution {
public:
    vector<ll> mirror1{0}, mirror2{0};

    bool isMirror(ll num, int base){
        ll mul = 1;
        while(mul * base <= num){
            mul *= base;
        }
        for(; num; mul/= base * base){
            if(num / mul != num%base) return false;
            num = (num - (num/mul) * mul - num%base)/base;
        }
        return true;
    }

    ll generate(int dig, int n, int k, ll firstMul){
        vector<ll> mirror;
        ll res = 0;
        for(int i=0; n>0 && i<10; i++){
            for(int j=0; n>0 && j<mirror1.size(); j++){
                mirror.push_back(firstMul * i + mirror1[j]*10 + i);
                if(i != 0 && isMirror(mirror.back(), k)){
                    res += mirror.back();
                    --n;
                }
            }
        }
        swap(mirror1, mirror2);
        swap(mirror2, mirror);
        return res + (n == 0 ? 0 : generate(dig + 1, n, k, firstMul*10));
    }

    long long kMirror(int k, int n) {
        ll ans = 0;
        for(int i=1; n>0 && i<10; i++){
            mirror2.push_back(i);
            if(isMirror(i,k)){
                ans += i;
                --n;
            }
        }
        return ans + generate(2, n, k, 10);
    }
};

/*honestly, i don't exactly know this solution but copied it.*/
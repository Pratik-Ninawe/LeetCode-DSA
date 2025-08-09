class Solution {
private:
    bool sdn(int n){
        int rem;
        int m=n;
        while(n!=0){
            rem = n % 10;
            if(rem==0){
                return false;
                break;
            }
            if(m % rem != 0)
                return false;
            n/=10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            if(sdn(i))  ans.push_back(i);
        }
        return ans;

    }
};
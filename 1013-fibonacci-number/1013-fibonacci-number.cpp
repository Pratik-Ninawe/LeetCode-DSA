class Solution {
    private:
        int fibo(int n){
            if(n<=1)    return n;
            else    return fibo(n-1)+fibo(n-2);
            
        }
public:
    int fib(int n) {
        return fibo(n);
    }
};
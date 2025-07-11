class Solution {
public:
    int dp[1001][1001];
    int solve(string &s,string &t,int m,int n){
        if(n==0) return dp[m][n]=1;
        if(m==0) return dp[m][n]=0;

        if(dp[m][n]!=-1) return dp[m][n];

        if(s[m-1]==t[n-1]){
            return dp[m][n]=solve(s,t,m-1,n)+solve(s,t,m-1,n-1);
        }
        return dp[m][n]=solve(s,t,m-1,n);
    }
    int numDistinct(string s, string t) {
        int m=s.length(),n=t.length();

        memset(dp,-1,sizeof(dp));
        return solve(s,t,m,n);
    }
};
class Solution {
public:
    int dp[38];
    int solve(int n){
        if(n == 0){
            return dp[n] = 0;
        }
        if(n == 1){
            return dp[n] = 1;
        }
        if(n == 2){
            return dp[n] = 1;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = solve(n-1)+solve(n-2)+solve(n-3);
    }
    
    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};
class Solution {
public:
    int integerBreak(int n) {
        // Time Complexity : O(N*N) & Space Complexity : O(N)

        // here, DP will store the maximum product we can get by dividing a particular number

        vector<int>dp(n+1,0);
        dp[1]=1;

        for(int i=2;i<=n;i++){
            for(int j=1;j<i;j++){
                dp[i]=max(dp[i],max(j*(i-j),j*dp[i-j]));
            }
        }
        return dp[n];
    }
};
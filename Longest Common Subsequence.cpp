class Solution
{
    public:
    int rec(string X, string Y, int m, int n, vector<vector<int>>&dp){
        if (m == 0 || n == 0) return 0;
        if (X[m - 1] == Y[n - 1]){
            return dp[m][n] = 1 + rec(X, Y, m - 1, n - 1, dp);
        }
        if(dp[m][n] != -1) return dp[m][n];
        return dp[m][n] = max(rec(X, Y, m, n - 1, dp),rec(X, Y, m - 1, n, dp));
    }
    int lcs(int m, int n, string s1, string s2){
        vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
        return rec(s1,s2,m,n,dp);
    }
};
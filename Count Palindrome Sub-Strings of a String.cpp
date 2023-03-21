int dp[1001][1001];
bool isPal(string s, int i, int j){
    if (i > j) return 1;
    if (dp[i][j] != -1) return dp[i][j];
    if (s[i] != s[j]) return dp[i][j] = 0;
    return dp[i][j] = isPal(s, i + 1, j - 1);
}
int CountPS(char s[], int n){
    memset(dp, -1, sizeof(dp));
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (isPal(s, i, j)) count++;
        }
    }
    return count;
}
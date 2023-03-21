class Solution {
  public:
    long long int count(int coins[], int n, int k){
        long long int i, j, x, y;
        long long int table[k + 1][n];
        for (i = 0; i < n; i++){
            table[0][i] = 1;
        }
        for(i=1; i<k+1; i++) {
            for(j=0; j<n; j++) {
                x=(i-coins[j] >= 0) ? table[i - coins[j]][j]: 0;
                y = (j >= 1) ? table[i][j - 1] : 0;
                table[i][j] = x + y;
            }
        }
        return table[k][n-1];
    }
};	
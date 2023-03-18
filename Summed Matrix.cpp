class Solution {
  public:
    long long sumMatrix(long long n, long long k) {
        if(k>2*n) return 0;
        if(k<=n+1) return k-1;
        else return 2*n-k+1;
    }
};
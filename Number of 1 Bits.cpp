class Solution {
  public:
    int setBits(int n){
        if (n == 0) return 0;
        else return (1 + setBits(n & (n - 1)));
    }
};
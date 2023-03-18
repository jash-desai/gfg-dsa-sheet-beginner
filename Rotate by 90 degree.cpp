class Solution
{   
    public:
    void swp(int &a, int &b, int &c, int &d){
       int t = a;
       a = b;
       b = c;
       c = d;
       d = t;
    }
    void rotateby90(vector<vector<int>>&m, int n){
        for(int i=0; i<n/2; i++){
            for(int j=0; j<(n+1)/2; j++){
                swp(m[i][j], m[j][n-1-i], m[n-1-i][n-1-j], m[n-1-j][i]);
            }
        }
    }
};
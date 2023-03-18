class Solution
{   
    public:
    void transpose(vector<vector<int>>&v, int n){
        int i=0;
        int j=0;
        while(i<n){
            swap(v[i][j], v[j][i]);
            j++;
            if(j==n){
                i++;
                j=i;
            }
        }
    }
};
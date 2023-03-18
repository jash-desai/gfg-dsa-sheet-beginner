class Solution{
  public:
    int MissingNumber(vector<int>& v, int n) {
        sort(v.begin(), v.end());
        for(int i=0; i<n-1; i++){
            if(v[i]-1!=i) return i+1;
        }
        return n;
    }
};
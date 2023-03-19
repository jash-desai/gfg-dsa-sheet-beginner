class Solution
{
    public:
    vector<long long> printFibb(int n) {
        vector<long long> v;
        if(n==0) return v;
        v.push_back(1);
        if(n==1) return v;
        v.push_back(1);
        if(n==2) return v;
        for(int i=1; i<n-1; i++){
            long long t = v[i] + v[i-1];
            v.push_back(t);
        }
        return v;
    }
};
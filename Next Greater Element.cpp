class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> v, int n){
        vector<long long> a(1,-1);
        stack<long long> s;
        s.push(v[n-1]);
        for(int i=n-2; i>=0; i--){
            while(!s.empty() and s.top()<=v[i]){
                s.pop();
            }
            long long t = (s.empty()) ? -1 : s.top();
            a.push_back(t);
            s.push(v[i]);
        }
        reverse(a.begin(), a.end());
        return a;
    }
};
class Solution
{
  public:
    vector<int> max_of_subarrays(int *v, int n, int k){
        vector<int> a;
        deque<int> dq(k);
        int i;
        for(i=0; i<k; ++i) {
            while((!dq.empty()) and v[i] >= v[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(; i<n; ++i){
            a.push_back(v[dq.front()]);
            while((!dq.empty()) and dq.front() <= i-k){
                dq.pop_front();
            }
            while((!dq.empty()) and v[i] >= v[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        a.push_back(v[dq.front()]);
        // set<pair<int, int> > q;
        // set<pair<int, int> >::reverse_iterator it;
        // for (int i = 0; i < k; i++) {
        //     q.insert({v[i], i});
        // }
        // int sum = 0;
        // for (int j = 0; j < n - k + 1; j++){
        //     it = q.rbegin();
        //     a.push_back(it->first);
        //     q.erase({v[j], j});
        //     q.insert({v[j + k], j + k});
        // }
        return a;
    }
};
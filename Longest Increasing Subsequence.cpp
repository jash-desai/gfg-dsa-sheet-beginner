class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
            if (it == ans.end()) {
                ans.push_back(arr[i]);
            }
            else {
                *it = arr[i];
            }
        }
        return ans.size();
    }
};
class Solution{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n){
        long long a=arr[0];
        stack<int> s;
        s.push(-1);
        int i=0;
        vector<int> left_smaller(n,-1), right_smaller(n,n);
        while(i<n){
            while(!s.empty() and s.top()!=-1 and arr[s.top()]>arr[i]){
                right_smaller[s.top()]=i;
                s.pop();
            }
            if(i>0 and arr[i]==arr[i-1]){
                left_smaller[i] = left_smaller[i-1];
            }else{
                left_smaller[i]=s.top();
            }
            s.push(i);
            i++;
        }
        for(int j=0; j<n; j++){
            a = max(a, arr[j]*(right_smaller[j]-left_smaller[j]-1));
        }
        return a;
    }
};
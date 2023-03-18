class Solution{
    public:
    void convertToWave(int n, vector<int>& v){
        if(n%2){
            int x = (n-1)/2;
            int i=0;
            while(x--){
                swap(v[i], v[i+1]);
                i+=2;
            }
        }else{
            int x = n/2;
            int i=0;
            while(x--){
                swap(v[i], v[i+1]);
                i+=2;
            }
        }
    }
};
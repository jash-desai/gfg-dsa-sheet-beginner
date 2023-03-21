class Solution{
    public:
    int catchThieves(char arr[], int n, int k){
        int pol = -1, thi = -1, res = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 'P') {
                pol = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == 'T') {
                thi = i;
                break;
            }
        }
        if (thi == -1 || pol == -1) return 0;
        while (pol < n && thi < n) {
            if (abs(pol - thi) <= k) {
    
                pol = pol + 1;
                while (pol < n && arr[pol] != 'P')
                    pol = pol + 1;
    
                thi = thi + 1;
                while (thi < n && arr[thi] != 'T')
                    thi = thi + 1;
    
                res++;
            }
            else if (thi < pol) {
                thi = thi + 1;
                while (thi < n && arr[thi] != 'T')
                    thi = thi + 1;
            }
            else {
                pol = pol + 1;
                while (pol < n && arr[pol] != 'P')
                    pol = pol + 1;
            }
        }
        return res;
    }
};
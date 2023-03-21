class Solution{
    public:
    long long a=0;
    long long toh(int n, int from_rod, int to_rod, int aux_rod) {
        if (n == 0) return 0;
        toh(n-1, from_rod, aux_rod, to_rod);
        cout << "move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
        a++;
        toh(n-1, aux_rod, to_rod, from_rod);
        return a;
    }

};
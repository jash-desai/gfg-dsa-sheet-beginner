pair<long long, long long> getMinMax(long long v[], int n) {
    pair<long long, long long> p {INT_MAX, INT_MIN};
    for(int i=0; i<n; i++){
        p = {min(p.first, v[i]), max(p.second, v[i])};
    }
    return p;
}
long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    long long ans = INT_MAX;
    for(int i=0; i<=n-m; i++){
        long long cur = abs(a[i] - a[i+m-1]);
        ans = min(cur,ans);
    }
    return ans;
    }
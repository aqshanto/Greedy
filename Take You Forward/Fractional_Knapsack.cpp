#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

struct product {
    double rate;
    int wt;
    int value;
};

bool cmp(struct product a, struct product b) {
    return a.rate > b.rate;
}

void solve() {
    int n, capacity;
    cin >> n;
    vector<int> val(n), wt(n);
    for (int i = 0; i < n; i++) cin >> val[i];
    for (int i = 0; i < n; i++) cin >> wt[i];
    cin >> capacity;
    vector<struct product> v(n);
    for (int i = 0; i < n; i++) {
        v[i].rate = ((val[i] * 1.0) / (wt[i] * 1.0));
        v[i].wt = wt[i];
        v[i].value = val[i];
    }
    sort(v.begin(), v.end(), cmp);
    // for (int i = 0; i < n; i++) {
    //     cout << v[i].rate << " " << v[i].wt << " " << v[i].value << endl;
    // }
    double tvl = 0;
    int twt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].wt <= capacity) {
            tvl += (double)(v[i].value);
            twt += v[i].wt;
            capacity -= v[i].wt;
        } else {
            tvl += (double)(capacity * v[i].rate);
            twt += capacity;
            capacity = 0;
        }
        if (capacity <= 0) {
            break;
        }
    }
    cout << twt << ' ' << tvl << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
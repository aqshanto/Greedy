#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

struct va {
    int val;
    int pos;
};

bool cmp(struct va a, struct va b) {
    return a.val < b.val;
}
void solve() {
    int n, x;
    cin >> n >> x;
    vector<struct va> v(n);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        v[i].val = p;
        v[i].pos = i + 1;
    }
    sort(v.begin(), v.end(), cmp);
    // for (int i = 0; i < n; i++) cout << v[i].val << " ";
    // cout << endl;
    bool f = false;
    for (int i = 0; i < n - 2; i++) {
        int k = n - 1;
        for (int j = i + 1; j < n - 1; j++) {
            while (k >= 0 && v[i].val + v[j].val + v[k].val > x) {
                k--;
            }
            if (j >= k) break;
            if (v[i].val + v[j].val + v[k].val == x) {
                cout << v[i].pos << ' ' << v[j].pos << " " << v[k].pos << endl;
                f = true;
                return;
            }
        }
    }
    if (!f) cout << "IMPOSSIBLE" << endl;
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
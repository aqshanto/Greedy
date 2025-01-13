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
    int i = 0, j = n - 1;
    while (i < n && j >= 0 && i < j) {
        if (v[i].val + v[j].val == x) {
            cout << v[i].pos << " " << v[j].pos << endl;
            return;
        }
        if (v[i].val + v[j].val < x) {
            i++;
        } else if (v[i].val + v[j].val > x) {
            j--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
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
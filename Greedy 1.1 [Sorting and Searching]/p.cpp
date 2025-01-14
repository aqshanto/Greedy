#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    int cnt = 0, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ele = 0;
    for (int i = 0; i < n; i++) {
        cnt += v[i];
        cout << cnt << " ";
        ele++;
        if (ele == a) {
            ele--;
            mx = max(mx, cnt);
            cnt -= v[i - a + 1];
        }
        cout << mx << endl;
    }
    // cout << mx << endl;
    cnt = 0, ele = 0;
    for (int i = 0; i < n; i++) {
        cnt += v[i];
        ele++;
        if (ele == b) {
            ele--;
            mx = max(mx, cnt);
            cnt -= v[i - b + 1];
        }
    }
    cout << mx << endl;
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
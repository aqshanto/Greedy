#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int j = n - 1, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i >= j) {
            cnt++;
            break;
        }
        while (j >= 0 && v[j] + v[i] > x) {
            if (v[j] <= x) {
                cnt++;
            }
            j--;
            if (i > j) break;
        }
        if (i > j) break;
        if (j >= 0 && v[j] + v[i] <= x) {
            cnt++;
            if (i + 1 == j) break;
            j--;
        }
        if (j < 0 || i >= j) break;
    }
    cout << cnt << endl;
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
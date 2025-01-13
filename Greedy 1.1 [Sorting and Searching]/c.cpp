#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> manus(n);
    vector<int> basa(m);
    for (int i = 0; i < n; i++) cin >> manus[i];
    for (int i = 0; i < m; i++) cin >> basa[i];
    sort(manus.begin(), manus.end());
    sort(basa.begin(), basa.end());
    int i = 0, cnt = 0;
    for (int j = 0; j < m; j++) {
        while (i < n && manus[i] < basa[j] - k) {
            i++;
        }
        if (i < n && manus[i] <= basa[j] + k) {
            cnt++;
            i++;
        }
        if (i >= n) break;
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
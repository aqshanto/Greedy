#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> price(n);
    vector<int> b(m);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
        mp[-1 * price[i]]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        auto val = mp.lower_bound(-b[i]);
        if (val != mp.end()) {
            cout << (*val).first * -1 << endl;
            (*val).second--;
            if ((*val).second == 0) mp.erase(val);
        } else {
            cout << -1 << endl;
        }
    }
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
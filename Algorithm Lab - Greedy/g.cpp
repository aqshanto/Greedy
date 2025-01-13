#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int x = 0;
    for (auto it : mp) {
        // cout << it.first << " " << it.second << endl;
        cnt += ((it.second / 2) * 2);
        x += (it.second % 2);
    }
    cout << cnt + ((x + 1) / 2) << endl;
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
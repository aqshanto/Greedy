#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int lstmvie = v[0].second, cnt = 1;
    for (int i = 1; i < n; i++) {
        if (v[i].first >= lstmvie) {
            cnt++;
            lstmvie = v[i].second;
        }
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
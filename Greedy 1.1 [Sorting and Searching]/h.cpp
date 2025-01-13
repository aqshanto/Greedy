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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int en, le;
        cin >> en >> le;
        v.push_back({en, 1});
        v.push_back({le, 2});
    }
    sort(v.begin(), v.end());
    int mx = INT_MIN, cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        // cout << v[i].first << " " << v[i].second << endl;
        if (v[i].second == 1) {
            cnt++;
        } else {
            mx = max(cnt, mx);
            cnt--;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ch;
    int j = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (upper_bound(ch.begin(), ch.end(), v[i]) == ch.end()) {
            ch.push_back(v[i]);
        } else {
            int pos = upper_bound(ch.begin(), ch.end(), v[i]) - ch.begin();
            ch[pos] = v[i];
        }
    }
    cout << ch.size() << endl;
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
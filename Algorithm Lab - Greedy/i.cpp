#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    int half = (sum / 2) + 1;
    // cout << half << endl;
    int alice = v[0], prty = v[0];
    vector<int> ans;
    ans.push_back(1);
    for (int i = 1; i < n; i++) {
        if (v[i] * 2 <= alice) {
            prty += v[i];
            ans.push_back(i + 1);
        }
    }
    if (prty >= half) {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    } else {
        cout << 0 << endl;
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
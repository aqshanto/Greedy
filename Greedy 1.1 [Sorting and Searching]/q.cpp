#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, sum;
    cin >> n >> sum;
    vector<int> v(n), prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        prefix[i + 1] = prefix[i] + v[i];
    }
    int ans = 0, x = prefix[0], j = 0;
    for (int i = 1; i <= n; i++) {
        cout << prefix[i] << " " << x << endl;
        if (prefix[i] - x == sum) {
            ans++;
            x = prefix[j];
            j++;
        }
    }
    cout << endl;
    cout << ans << endl;
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
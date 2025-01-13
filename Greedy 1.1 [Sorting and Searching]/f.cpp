#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

struct ab {
    int s;
    int oc;
    int pos;
};

void solve() {
    int n, mx = INT_MIN;
    cin >> n;
    vector<int> v(n);
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
    }
    int x = mp.size();
    mx = max(mx, x);
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
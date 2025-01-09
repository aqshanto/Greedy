#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, k;
    while (cin >> n >> k) {
        int m = n, cnt = 0;
        while (n >= k) {
            cnt += (n / k);
            n = (n % k) + (n / k);
        }
        cout << cnt + m << endl;
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
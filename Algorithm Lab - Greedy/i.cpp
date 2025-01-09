#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, d, r;
    while (cin >> n >> d >> r && (n != 0 || d != 0 || r != 0)) {
        vector<int> mrn(n), eve(n);
        for (int i = 0; i < n; i++) cin >> mrn[i];
        for (int i = 0; i < n; i++) cin >> eve[i];
        sort(mrn.begin(), mrn.end());
        sort(eve.rbegin(), eve.rend());
        int i = 0, j = 0;
        vector<int> v;
        while (i < n && j < n) {
            while (mrn[i] + eve[j] > d) {
                j++;
                v.push_back(eve[j]);
                if (j > n) break;
            }
            if (mrn[i] + eve[j] <= d) {
                i++;
                j++;
            }
        }
        int cnt = 0;
        for (int a = i; a < n; a++) {
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
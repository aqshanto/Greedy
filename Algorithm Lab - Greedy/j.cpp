#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    vector<char> mn(n);
    mn[n - 1] = s[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        mn[i] = min(mn[i + 1], s[i]);
    }
    // for (int i = 0; i < n; i++) {
    //     cout << mn[i];
    // }
    // cout << endl;
    for (int i = 0; i < n; i++) {
        if (s[i] != mn[i]) {
            int lastpos = -1;
            for (int j = n - 1; j >= 0; --j) {
                if (s[j] == mn[i]) {
                    lastpos = j;
                    break;
                }
            }
            if (lastpos != -1) {
                swap(s[i], s[lastpos]);
            }
            break;
        }
    }
    // cout << s << " " << t << endl;
    if (s < t)
        cout << s << endl;
    else
        cout << "---" << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
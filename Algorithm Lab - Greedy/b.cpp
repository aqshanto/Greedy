#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve() {
    int n, cnt = 0, l = 0, sccrow = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == '.') {
            cnt++;
        }
        if (str[i] == '#' && cnt == 0) {
            l = i + 1;
        }
        if ((i - l + 1) == 3 && cnt != 0) {
            sccrow++;
            l = i + 1;
            cnt = 0;
        }
    }
    if (cnt != 0) {
        sccrow++;
    }
    cout << sccrow << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for (int j = 1; j <= t; j++) {
        cout << "Case " << j << ": ";
        solve();
    }
    return 0;
}
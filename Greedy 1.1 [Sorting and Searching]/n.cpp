#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

struct inT {
    int val;
    int pos;
};

bool cmp(struct inT a, struct inT b) {
    return a.val < b.val;
}

void solve() {
    int n, sum;
    cin >> n >> sum;
    vector<struct inT> v(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i].val = x;
        v[i].pos = i;
    }
    sort(v.begin(), v.end(), cmp);
    bool f = false;

    // for (int i = 0; i < n; i++) {
    //     cout << v[i].val << " " << v[i].pos << endl;
    // }
    for (int i = 0; i < n; i++) {
        // cout << v[i].val << " " << v[i].pos << endl;
        for (int j = i + 1; j < n; j++) {
            int a = j + 1;
            int b = n - 1;
            while (a < b) {
                int s = v[i].val + v[j].val + v[a].val + v[b].val;
                if (s == sum) {
                    cout << v[i].pos + 1 << " " << v[j].pos + 1 << " " << v[a].pos + 1 << " " << v[b].pos + 1 << endl;
                    f = true;
                    break;
                } else if (s > sum) {
                    b--;
                } else {
                    a++;
                }
            }
            if (f) break;
        }
        if (f) break;
    }
    if (!f) cout << "IMPOSSIBLE" << endl;
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
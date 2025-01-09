#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

struct meeting {
    int st;
    int ed;
    int mtorder;
};
bool static cmp(struct meeting a, struct meeting b) {
    if (a.ed == b.ed) return a.mtorder < b.mtorder;
    return a.ed < b.ed;
}

void solve() {
    int n;
    cin >> n;
    vector<int> start(n), end(n);
    vector<struct meeting> v(n);
    for (int i = 0; i < n; i++) {
        cin >> start[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> end[i];
    }
    for (int i = 0; i < n; i++) {
        v[i].st = start[i];
        v[i].ed = end[i];
        v[i].mtorder = i + 1;
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> answer;
    answer.push_back(v[0].mtorder);
    int pretime = v[0].ed;
    for (int i = 1; i < n; i++) {
        if (v[i].st > pretime) {
            answer.push_back(v[i].mtorder);
            pretime = v[i].ed;
        }
    }
    // for (int i = 0; i < answer.size(); i++) {
    //     cout << answer[i] << endl;
    // }
    cout << answer.size() << endl;
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
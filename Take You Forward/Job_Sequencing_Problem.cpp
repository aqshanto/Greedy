#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

struct JobData {
    int id, deadline, profit;
};

bool static cmp(struct JobData a, struct JobData b) {
    return a.profit > b.profit;
}

vector<int> JobSequencing(vector<int> &id, vector<int> &Ddlne,
                          vector<int> &prft) {
    int n = id.size(), mx = INT_MIN;
    vector<struct JobData> v(n);
    for (int i = 0; i < n; i++) {
        v[i].id = i;
        v[i].deadline = Ddlne[i];
        mx = max(mx, Ddlne[i]);
        v[i].profit = prft[i];
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> sequence(mx, -1);
    int TPrft = 0;
    for (int i = 0; i < n; i++) {
        int j = v[i].deadline - 1;
        while (j >= 0 && sequence[j] != -1) {
            j--;
        }
        if (j >= 0) {
            sequence[j] = v[i].id;
            TPrft += v[i].profit;
        }
    }
    int cnt = 0;
    for (int i = 0; i < mx; i++) {
        // cout << sequence[i] << " ";
        if (sequence[i] != -1) cnt++;
    }
    vector<int> ans(2);
    ans[0] = cnt;
    ans[1] = TPrft;
    return ans;
}
void solve() {
    int n, mx = INT_MIN;
    cin >> n;
    vector<int> jbID(n), Ddlne(n), prft(n);
    vector<struct JobData> v(n);
    for (int i = 0; i < n; i++) cin >> jbID[i];
    for (int i = 0; i < n; i++) cin >> Ddlne[i];
    for (int i = 0; i < n; i++) cin >> prft[i];
    for (int i = 0; i < n; i++) {
        v[i].id = i;
        v[i].deadline = Ddlne[i];
        mx = max(mx, Ddlne[i]);
        v[i].profit = prft[i];
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> sequence(mx, -1);
    int TPrft = 0;
    for (int i = 0; i < n; i++) {
        // cout << v[i].id << " " << v[i].deadline << " " << v[i].profit << endl;
        int j = v[i].deadline - 1;
        while (j >= 0 && sequence[j] != -1) {
            j--;
        }
        if (j >= 0) {
            sequence[j] = v[i].id;
            TPrft += v[i].profit;
        }
    }
    int cnt = 0;
    // for (int i = 0; i < mx; i++) {
    //     cout << sequence[i] << " ";
    //     if (sequence[i] != -1) cnt++;
    // }
    // cout << endl;
    cout << TPrft << " " << cnt << endl;
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
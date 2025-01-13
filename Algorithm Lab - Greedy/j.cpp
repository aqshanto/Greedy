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
    // for (int i = n - 1; i >= 0; i--) {
    //     cout << mn[i];
    // }
    // cout << endl;
    int lastpos = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != mn[i]) {
            lastpos = i;
            break;
        }
    }
    if (lastpos != 0) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != mn[i]) {
                swap(s[i], s[lastpos]);
                break;
            }
        }
    }
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

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl "\n"
// double pi = 3.141592653589793238462643383279;

// void solve() {
//     string s, t;
//     cin >> s >> t;

//     vector<char> min_suffix(s.size());
//     min_suffix[s.size() - 1] = s[s.size() - 1];

//     for (int i = s.size() - 2; i >= 0; --i) {
//         min_suffix[i] = min(s[i], min_suffix[i + 1]);
//     }

//     for (int i = 0; i < s.size(); ++i) {
//         if (s[i] != min_suffix[i]) {
//             int lastpos = -1;
//             for (int j = s.size() - 1; j > i; --j) {
//                 if (s[j] == min_suffix[i]) {
//                     lastpos = j;
//                     break;
//                 }
//             }
//             if (lastpos != -1) {
//                 swap(s[i], s[lastpos]);
//             }
//             break;
//         }
//     }

//     if (s <= t) {
//         cout << s << endl;
//     } else {
//         cout << "---" << endl;
//     }
// }

// signed main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

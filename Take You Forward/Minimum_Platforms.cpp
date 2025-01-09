#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

int findPlatform(vector<int>& arr, vector<int>& dep, int n) {
	int plat = 1, mx = INT_MIN;
	sort(arr.begin(), arr.end());
	sort(dep.begin(), dep.end());
	int j = 0, i = 1;
	while (i < n && j < n) {
		if (arr[i] <= dep[j]) {
			plat++;
			i++;
		} else if (arr[i] > dep[j]) {
			plat--;
			j++;
		}
		if (plat > mx) {
			mx = plat;
		}
	}
	return mx;
}

void solve() {
	int n;
	cin >> n;
	vector<int>arr(n), dep(n);
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++)cin >> dep[i];
	cout << findPlatform(arr, dep, n) << endl;
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
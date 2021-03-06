#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;

void init_code() {
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	read(n);
	int arr[n];
	fr(0, n)
	cin >> arr[i];
	sort(arr, arr + n);
	int s = 0, lasti = 0;
	fr(0, n) {
		if (arr[i] <= i + 1) {
			s = s + (i + 1 - arr[i]);
			lasti = i;
		}
		else
			break;
	}
	if (lasti < n - 1 || s % 2 == 0)
		cout << "Second" << endl;
	else
		cout << "First" << endl;

}

int main() {
	init_code();
	read(t);
	while (t--) {
		solve();
	}
	return 0;
}

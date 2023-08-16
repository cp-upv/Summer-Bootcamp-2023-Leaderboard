#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
	int n; cin >> n;
	int a[n], mn = INT32_MAX, mx = INT32_MIN;
	REP(i, 0, n) {
	 	cin >> a[i];
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}
	
	int count[mx-mn+1]; memset(count, 0, sizeof(count));
	REP(i, 0, n) count[a[i]-mn]++;
	REP(i, 0, mx-mn+1) {
		while (count[i]--) {
			cout << i+mn << ' ';
		}
	}
}
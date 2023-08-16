#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
	int n; cin >> n;
	int a[n]; REP(i, 0, n) cin >> a[i];
	sort(a, a+n);

	int q, c; cin >> q;
	int l, r, m;
	bool found;
	while (q--) {
		cin >> c;
		found = false;
		l = 0; r = n-1;
		while (l <= r) {
			m = (l+r)/2;
			if (a[m] == c) {
				found = true; l = n;
			} else if (a[m] < c) l = m+1;
			else r = m-1;
		}
		cout << (found ? "YES" : "NO"); ent;
	}
}
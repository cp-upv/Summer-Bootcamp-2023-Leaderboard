#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
	int n; cin >> n;
	int a[n]; REP(i, 0, n) cin >> a[i];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n-i-1; ++j) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]); // Built-in, más eficiente
			}
		}
	}

	REP(i, 0, n) cout << a[i] << ' ';
}
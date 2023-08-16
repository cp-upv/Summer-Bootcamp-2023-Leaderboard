#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
	int n; cin >> n;
	double low = 0, mid = n+1, up = n;
	double n_try = -1;
	while (abs(n_try-n) >= 1e-7) {
		mid = (low+up)/2.0;
		n_try = mid*mid;
		if (n_try > n) up = mid;
		else low = mid;
	}
	cout << fixed << setprecision(7) << mid;
}
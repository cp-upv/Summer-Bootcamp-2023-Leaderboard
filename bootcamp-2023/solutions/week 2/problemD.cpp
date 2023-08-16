#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
	int n, temp; cin >> n;
	int a[n], b[n];
	REP(i, 0, n) cin >> a[i];
	REP(i, 0, n) cin >> b[i];
	REP(i, 0, n) cout << (i%2 == 0 ? a[i] : b[i]) << ' '; cout << endl;
	REP(i, 0, n) cout << (i%2 == 1 ? a[i] : b[i]) << ' '; cout << endl;
}
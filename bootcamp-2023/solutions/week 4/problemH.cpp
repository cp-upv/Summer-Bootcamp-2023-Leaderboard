#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)
#define ent cout << "\n"

int main() {
	int n; cin >> n;
	pair<int, int> p[n];
	int solved, penalty;
	REP(i, 0, n) {
		cin >> solved >> penalty;
		p[i] = make_pair(solved, INT32_MAX - penalty);
	}
	sort(p, p+n);

	REPV(i, n-1, 0) {
		cout << p[i].first << ' ' << INT32_MAX - p[i].second; ent;
	}
}
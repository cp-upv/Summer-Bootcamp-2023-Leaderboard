#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
	int a, b; cin >> a >> b;
	int A[a], B[b];
	REP(i, 0, a) cin >> A[i];
	REP(i, 0, b) cin >> B[i];

	int p1 = 0, p2 = 0, prev;
	while (p1 <= a && p2 <= b) {
		if (A[p1] == B[p2]) {
			prev = A[p1];
			cout << prev << ' ';
			while (p1 < a && A[p1] == prev) ++p1;
			while (p2 < b && B[p2] == prev) ++p2;
		} else if (A[p1] < B[p2]) ++p1;
		else ++p2;
	}
}
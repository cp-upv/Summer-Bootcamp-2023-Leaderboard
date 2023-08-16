#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
	int n, temp; cin >> n;
	int a[n];
	REP(i, 0, n) cin >> a[i];
	REP(i, 0, n) {
		cin >> temp;
		cout << temp + a[i] << ' ';
	}
}
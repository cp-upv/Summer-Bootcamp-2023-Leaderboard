#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int mx = INT32_MIN, mn = INT32_MAX, temp;
	while (n--) {
		cin >> temp;
		mx = max(mx, temp);
		mn = min(mn, temp);
	}
	cout << mn << ' ' << mx;
}
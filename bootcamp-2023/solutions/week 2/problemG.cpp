#include <bits/stdc++.h>
using namespace std;

int main() {
	int prev, curr;
	cin >> curr; prev = curr;
	while (cin >> curr) {
		if (curr == prev) cout << 'I';
		else if (curr < prev) cout << 'B';
		else cout << 'S';
		prev = curr;
	}
}
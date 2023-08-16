#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt; cin >> tt;
	while (tt--) {
		int n, fav; cin >> n >> fav;
		int temp;
		bool found = false;
		while (n--) {
			cin >> temp;
			if (!found && temp == fav) {
				found = true;
			}
		}
		cout << (found ? "YES" : "NO") << endl;
	}
}
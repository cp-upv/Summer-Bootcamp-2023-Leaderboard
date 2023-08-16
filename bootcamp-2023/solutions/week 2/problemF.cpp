#include <bits/stdc++.h>
using namespace std;

int main() {
	int p, v, ans = 0;
	cin >> p >> v;
	char w1, w2;
	for (int i = 0; i < p; ++i) {
		for (int j = 0; j < v; ++j) {
			cin >> w1 >> w2;
			if (w1 == '#' || w2 == '#') ++ans;
		}
	}
	cout << ans;
}
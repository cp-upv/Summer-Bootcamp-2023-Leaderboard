#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int columnas[m]; memset(columnas, 0, sizeof(columnas));

	int s, countFila, ans = 0;
	for (int i = 0; i < n; ++i) {
		countFila = 0;
		for (int j = 0; j < m; ++j) {
			cin >> s;
			countFila += s;
			columnas[j] += s;
		}
		ans = max(ans, countFila);
	}

	for (int i = 0; i < m; ++i) ans = max(ans, columnas[i]);

	cout << ans;
}
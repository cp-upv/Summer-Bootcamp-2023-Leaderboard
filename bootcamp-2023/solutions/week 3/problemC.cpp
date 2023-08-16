#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	bool filas[n], columnas[m];
	memset(filas, 0, sizeof(filas));
	memset(columnas, 0, sizeof(columnas));
	
	char in;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> in;
			if (in == '#') {
				filas[i] = true;
				columnas[j] = true;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << (filas[i] || columnas[j] ? '#' : '.');
		}
		cout << endl;
	}
}
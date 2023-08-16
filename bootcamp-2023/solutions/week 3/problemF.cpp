#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[m][n];

	// Se podria guardar la matriz y rotarla después, pero para esta solución 
	// vamos a rotarla según se lee de la consola
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[j][n-i-1];
		}
	}

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << a[i][j] << ' ';
		} cout << "\n";
	}
}
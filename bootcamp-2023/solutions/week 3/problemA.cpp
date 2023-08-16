#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)

int main() {
	int L; cin >> L;
	char c;
	bool enBlanco = true;

	char caraAntes[L][L];
	REP(i, 0, L) {
		REP(j, 0, L) {
			cin >> c;
			if (c == '#') enBlanco = false;
			caraAntes[i][j] = c;
		}
	}
	if (enBlanco) {
		cout << "NO LLEVABA MERMELADA"; return 0;
	}

	REP(i, 0, L) {
		REP(j, 0, L) {
			cin >> c;
			if (c != caraAntes[i][j]) {
				cout << "TRAGEDIA"; return 0;
			}
		}
	}
	cout << "HA HABIDO SUERTE";
}
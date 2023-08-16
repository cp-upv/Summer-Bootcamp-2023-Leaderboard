#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
	int n, m; cin >> n >> m;
	char b[n][m];
	int ans[n][m]; memset(ans, 0, sizeof(ans));

	REP(i, 0, n) REP(j, 0, m) cin >> b[i][j];

	/*
	123
	456
	789
	*/
	REP(i, 0, n) REP(j, 0, m) {
		/* 1 */ if (i>0 && j>0 && b[i-1][j-1] == '*') ++ans[i][j];
		/* 2 */ if (i>0 && b[i-1][j] == '*') ++ans[i][j];
		/* 3 */ if (i>0 && j<m-1 && b[i-1][j+1] == '*') ++ans[i][j];
		/* 4 */ if (j>0 && b[i][j-1] == '*') ++ans[i][j];

		/* 6 */ if (j<m-1 && b[i][j+1] == '*') ++ans[i][j];
		/* 7 */ if (i<n-1 && j>0 && b[i+1][j-1] == '*') ++ans[i][j];
		/* 8 */ if (i<n-1 && b[i+1][j] == '*') ++ans[i][j];
		/* 9 */ if (i<n-1 && j<m-1 && b[i+1][j+1] == '*') ++ans[i][j];

		/* 5 */ if (b[i][j] == '*') ans[i][j] = 9;
	}

	REP(i, 0, n) {
		REP(j, 0, m) {
			switch (ans[i][j]) {
			case 0:
				cout << ' ';
				break;
			case 9:
				cout << 'F';
				break;
			default:
				cout << ans[i][j];
			}
		}
		if (i < n-1) ent;
	}
}
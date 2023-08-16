#include <bits/stdc++.h>

using namespace std;


char canvas[1000][1000];


void solve(int sx, int sy, int ex, int ey, char c) {
	if (ex - sx < 4) {
		for (int i = sx; i <= ex; i++) {
			for (int j = sy; j <= ey; j++) {
				canvas[i][j] = c;
			}
		}
		return;
	}
	
	char nc = c == '.' ? '#' : '.';

	for (int i = sx; i <= ex; i++) {
		canvas[i][sy] = c;
		canvas[i][ey] = c;
	}

	for (int j = sy; j <= ey; j++) {
		canvas[sx][j] = c;
		canvas[ex][j] = c;
	}
	
	if ((ex-sx) % 2 == 0) {
		int cy = sy + (ey-sy)/2;
		for (int i = sx; i <= ex; i++) {
			canvas[i][cy] = c;
		}
		
		int cx = sx + (ex-sx)/2;
		for (int j = sy; j <= ey; j++) {
			canvas[cx][j] = c;
		}
	
		solve(sx+1, sy+1, cx-1, cy-1, nc);
		solve(sx+1, cy+1, cx-1, ey-1, nc);
		solve(cx+1, sy+1, ex-1, cy-1, nc);
		solve(cx+1, cy+1, ex-1, ey-1, nc);
	} else {
		int cy = sy + (ey-sy)/2;
		for (int i = sx; i <= ex; i++) {
			canvas[i][cy] = c;
			canvas[i][cy+1] = c;
		}
		
		int cx = sx + (ex-sx)/2;
		for (int j = sy; j <= ey; j++) {
			canvas[cx][j] = c;
			canvas[cx+1][j] = c;
		}

		solve(sx+1, sy+1, cx-1, cy-1, nc);
		solve(sx+1, cy+2, cx-1, ey-1, nc);
		solve(cx+2, sy+1, ex-1, cy-1, nc);
		solve(cx+2, cy+2, ex-1, ey-1, nc);
	}
	
}


int main() {
    int n; cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			canvas[i][j] = 0;
		}
	}

	solve(0, 0, n-1, n-1, '#');
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << canvas[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
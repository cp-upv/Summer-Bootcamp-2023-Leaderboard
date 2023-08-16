#include <bits/stdc++.h>

using namespace std;

int w, h;
vector<string> maze;

int solve(int px, int py, int x, int y) {
	int r;
	if (maze[y][x] == 'S') { return 1; }

	if (x > 0 && px >= x && maze[y][x-1] != '#') {
		r = solve(x, y, x-1, y);
		if (r > 0) { return r+1;}
	}
	if (x < w-1 && px <= x && maze[y][x+1] != '#') {
		r = solve(x, y, x+1, y);
		if (r > 0) { return r+1;}
	}
	if (y > 0 && py >= y && maze[y-1][x] != '#') {
		r = solve(x, y, x, y-1);
		if (r > 0) { return r+1;}
	}
	if (y < h-1 && py <= y && maze[y+1][x] != '#') {
		r = solve(x, y, x, y+1);
		if (r > 0) { return r+1;}
	}
	return -1;
}

int main() {
	string line;
	
    cin >> w >> h;
    for (int i = 0; i < h; i++) { 
		cin >> line;
		maze.push_back(line); 
	}

	cout << solve(w-2, h-2, w-2, h-2) << endl;
	return 0;
}
 
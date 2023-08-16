#include <bits/stdc++.h>

using namespace std;

	
map <string, vector<string>> g;


string solve(string curr, string target) {
	if (curr == target) { return target; }
	string path;
	vector<string>::iterator it;
	for(it = g[curr].begin(); it != g[curr].end(); it++) {
    	path = solve(*it, target);
		if (path.size() > 0) { return curr + "/" + path; }
	}
	return "";
}


int main() {
    int n, m; cin >> n >> m;
	string line, src, dest;	

    for (int i = 0; i < n; i++) { 
		cin >> line;
		if (line[0] == '/') {
			dest = line.substr(1, 10);
			src = "";
		} else {
			src = line.substr(0, 10);
			dest = line.substr(11, 10);
		} 
		if (g.find(dest) == g.end()) {
			g.insert(pair<string, vector<string>>("", vector<string>())); 
		}
		g[src].push_back(dest);
	}
	
	for (int i = 0; i < m; i++) {
		cin >> line;
		cout << solve("", line) << endl;
	}

	return 0;
}
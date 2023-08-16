#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
	string s1, s2; cin >> s1 >> s2;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	cout << (s1 == s2 ? "YES" : "NO");
}
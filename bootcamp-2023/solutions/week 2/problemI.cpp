#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)

int main() {
	// Válido para números de todos los dígitos
	string s; cin >> s;
	int nDigits = s.size();
	int digits[nDigits];
	REP(i, 0, nDigits) digits[i] = s[i]-'0';

	int cummulativeSum = 0;
	REPV(i, nDigits-1, 0) {
		if (i%2 == 0) {
			digits[i]*=2;
			if (digits[i] > 9) digits[i]-=9;
		}
		
		cummulativeSum += digits[i];
	}
	
	cout << (cummulativeSum%10 == 0 ? "YES" : "NO");
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int size = n*4+1;
	char c;

	bool iIsMultipleOf4, jIsMultipleOf4;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			iIsMultipleOf4 = i%4 == 0;
			jIsMultipleOf4 = j%4 == 0;
			c = ' ';
			if (iIsMultipleOf4) c = '-';
			if (jIsMultipleOf4) c = '|';
			if (iIsMultipleOf4 && jIsMultipleOf4) c = '+';
			cout << c;
		} cout << "\n";
	}
}
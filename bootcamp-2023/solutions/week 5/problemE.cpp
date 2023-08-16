#include <bits/stdc++.h>

using namespace std;


char canvas[1000][1000];


void merge(vector<int> &res, vector<int> &l1, vector<int> &l2) {
	int i1 = 0, i2 = 0;
	for (int i = 0; i < res.size(); i++) {
		if (l1.size() == i1) {
			res[i] = l2[i2++];
		} else if (l2.size() == i2) {
			res[i] = l1[i1++];
		} else if (l2[i2] < l1[i1]) {
			res[i] = l2[i2++];
		} else {
			res[i] = l1[i1++];
		}
	}
}


void solve(vector<int> &l) {
	if (l.size() == 1) { return; }
	
	int mid = (l.size() / 2)-1;
	vector<int> l1(l.begin(), l.begin()+mid+1);
	vector<int> l2(l.begin()+mid+1, l.begin() + l.size());
	
	solve(l1);
	solve(l2);
	
	merge(l, l1, l2);
}


int main() {
    int n, a; cin >> n;
	vector<int> l;	
	for (int i = 0; i < n; i++) {
		cin >> a;
		l.push_back(a);
	}

	solve(l);
	
	for (int i = 0; i < n; i++) {
		cout << l[i] << " ";
	}
	
	return 0;
}
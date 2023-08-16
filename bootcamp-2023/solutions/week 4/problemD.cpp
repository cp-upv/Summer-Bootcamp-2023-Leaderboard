#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
    int n, k; cin >> n >> k;
    int a[n]; REP(i, 0, n) cin >> a[i];
    sort(a, a+n);
    cout << a[k-1] << ' ' << a[k];
}
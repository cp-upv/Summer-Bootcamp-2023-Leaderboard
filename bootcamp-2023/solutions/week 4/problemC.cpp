#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
    int n; cin >> n;
    int a[n]; REP(i, 0, n) cin >> a[i];
    sort(a, a+n);

    int ans = INT32_MAX;
    REP(i, 1, n) {
        ans = min(ans, a[i]-a[i-1]);
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
    int n; cin >> n;
    ll a[n]; REP(i, 0, n) cin >> a[i];
    ll b[n]; REP(i, 0, n) cin >> b[i];
    sort(a, a+n); sort(b, b+n);

    ll ans = 0;
    REP(i, 0, n) {
        ans += a[i]*b[i];
    }
    cout << ans;
}
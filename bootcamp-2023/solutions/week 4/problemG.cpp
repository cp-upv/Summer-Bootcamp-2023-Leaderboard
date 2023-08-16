#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << "\n"

int main() {
    int n, m; cin >> n >> m;
    int b[n]; REP(i, 0, n) cin >> b[i];
    int g[m]; REP(i, 0, m) cin >> g[i];
    sort(b, b+n, greater<>());
    sort(g, g+m, greater<>());
    
    ll ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (b[i] >= g[j]) {
            ans += g[j];
            ++i;
        }
        ++j;
    }
    cout << ans;
}
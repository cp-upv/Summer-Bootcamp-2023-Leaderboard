#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a;
    long long t;
    long long n;
    cin >> a;
    cin >> t;
    cin >> n;
    if(n > 0){
        --n;
    } else if(t > 0){
        --t;
    } else if(a > 0){
        --a;
    }
    cout << (a * 5) + (t * 7) + (n * 13);
    return 0;

}

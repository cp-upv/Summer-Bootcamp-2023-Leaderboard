#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int mins = n % (24 * 60);
    int h = mins / 60;
    int m = mins % 60;
    h = (h + 12) % 24;
    if(h < 10){
        cout << "0" << h << ":";
    } else {
        cout << h << ":";
    }
    if(m < 10){
        cout << "0" << m;
    } else {
        cout << m;
    }
    
    return 0;
}

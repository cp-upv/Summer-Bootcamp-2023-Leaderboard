#include <bits/stdc++.h>

using namespace std;

void printArrow(int n, int limit, string s){
    if(n == limit){
        cout << s << endl;
    } else {
        cout << s << endl;
        printArrow( ++n, limit, s + '#');
        cout << s << endl;
    }
}

int main(){
    int lim;
    cin >> lim;
    printArrow(1, lim, "#");
    return 0;
}
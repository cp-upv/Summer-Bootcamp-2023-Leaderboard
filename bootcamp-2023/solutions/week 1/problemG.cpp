#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    int a;
    int b;
    char c;

    cin >> a;
    cin >> c;
    cin >> b;
    
    switch(c)
    {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if(b != 0) cout << setprecision(2) << fixed << 1.0 * a / b;
                else cout << "ERROR";
            break;
    }

    return 0;
}

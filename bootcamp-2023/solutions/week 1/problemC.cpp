#include <bits/stdc++.h>

using namespace std;

bool isVow(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cout << x * 2 << " ";
    }
    cout << endl;

    int n1;
    cin >> n1;
    for(int i = 0; i < n1; i++){
        char c;
        cin >> c;
        c = toupper(c);
        cout << c << " ";
    }
    cout << endl;
    
    int n2;
    cin >> n2;
    for(int i = 0; i < n2; i++){
        string s;
        cin >> s;
        for(char& c : s){
            if(isVow(c)){
                c = '0';
            }
        }
        cout << s << " ";
    }
}

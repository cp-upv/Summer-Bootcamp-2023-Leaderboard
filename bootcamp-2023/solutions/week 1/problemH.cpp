#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    int n;
    float sum = 0.0;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        float x;
        cin >> x;
        if (x >= 5.00){
            sum += x;
            ++count;    
        }
    }
    cout << setprecision(2) << fixed << sum / count;
    return 0;
}

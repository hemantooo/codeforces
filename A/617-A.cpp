#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans,counter=0;
    cin >> ans;
    
    while (ans!=0) {
        if (ans >= 5) {
            ans -= 5;
            counter++;
        }
        else if (ans == 4) {
            ans -= 4;
            counter++;
        }
        else if (ans == 3) {
            ans -= 3;
            counter++;
        }
        else if (ans == 2) {
            ans -= 2;
            counter++;
        }
        else {
            ans -= 1;
            counter++;
        }
    }
    cout << counter;
    return 0;
}

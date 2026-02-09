#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int n;
    cin >> n;
    int x = 0;
    while (n--) {
        string comd;
        cin >> comd;
        if (comd == "X++") x++;
        else if (comd == "++X") ++x;
        else if (comd == "X--") x--;
        else --x;
    }
    cout << x;
    return 0;
}
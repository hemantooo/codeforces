#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int col,row;
    for (int i = 0; i < 5; i++) {
        int a1,a2,a3,a4,a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        if (a1==1) {
            col = 1; row = i+1; break;
        }
        else if (a2==1) {
            col = 2; row = i+1; break;
        }
        else if (a3==1) {
            col = 3; row = i+1; break;
        }
        else if (a4==1) {
            col = 4; row = i+1; break;
        }
        else if (a5==1) {
            col = 5; row = i+1; break;
        }
    }
    cout << (abs(3-row)+abs(3-col));
    
    return 0;
}
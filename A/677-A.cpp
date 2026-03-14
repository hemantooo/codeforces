#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h,bend=0;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a>h) bend++;
    }
    cout << n+bend;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,n,max;
        cin >> a >> b >> c >> n;
        max = a;
        if(b>max) max = b;
        if(c>max) max = c;
        int x = 2*max - (a+b+c-max);
        if ((x<=n) && (n-x) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
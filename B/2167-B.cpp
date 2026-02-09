#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, n;
    string a, b;

    cin >> q;
    while (q != 0) {
        cin >> n >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a.compare(b) == 0) cout << "YES\n";
        else cout << "NO\n";
        q--;
    }
    
    return 0;
}
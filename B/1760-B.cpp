#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin >> n >> str;
        int max=str[0];
        for (int i = 1; i < n; i++) {
            if (str[i]>max) max=str[i];
        }
        cout << max-96 << '\n';
    }
    return 0;
}
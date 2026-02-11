#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            long long j;
            cin >> j;
            sum = sum + j;
        }
        long long square = sqrtl(sum);
    
        if (square*square == sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
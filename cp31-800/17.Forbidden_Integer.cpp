#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        
        if (x!=1) {
            cout << "YES\n" << n << '\n';
            while (n--) {
                cout << 1 << " ";
            }
            cout << '\n';
        }
        else {
            if (k==1) {
                cout << "NO\n";
            }
            else {
                if (n%2==0) {
                    int sol=n/2;
                    cout << "YES\n" << sol << '\n';
                    while (sol--) {
                        cout << 2 << " ";
                    }
                    cout << '\n';
                }
                else {
                    if (k>=3) {
                        int no_2=n/2 - 1;
                        cout << "YES\n" << n/2 << '\n';
                        while (no_2--) {
                            cout << 2 << " ";
                        }
                        cout << 3 << '\n';
                    }
                    else {
                        cout << "NO\n";
                    }
                }
                
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t;
    cin >> t;
    while (t!=0) {
        int l, a, b, spins = 0;
        cin >> l >> a >> b;
        int pivot = a, max = a;
        while(spins<l) {
            pivot = (pivot+b)%l;
            if (pivot>max) {
                max=pivot;
            }
            spins++;
        }
        cout << max << '\n';
        t--;
    }
}
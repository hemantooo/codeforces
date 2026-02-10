#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        
        for (int i = 0; i < n; i++) {
            int element;
            cin >> element;
            v.push_back(element);
        }
        sort(v.begin(), v.end(), greater<>());
        int min = v[0];
        for (int i = 1; i < n; i++) {
            if (v[i-1]-v[i] < min) min = v[i-1]-v[i];
        }
        cout << min <<'\n';
    }
    return 0;
}
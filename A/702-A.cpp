#include <bits/stdc++.h>
using namespace std;
    
int main() {
    vector<int> v;
    int t;
    cin >> t;
    int t2 = t, counter = 0;
    
    while (t--) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    int max = 0;
    for (int i = 0; i < t2-1; i++) {
        if (v[i] < v[i+1]) counter++;
        else {
            counter = 0;
        }
        
        if (counter > max) max = counter;
    }
    
    cout << max+1;
    return 0;
}
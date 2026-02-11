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
            int num;
            cin >> num;
            
            v.push_back(num);
        }
        
        bool flag = false;
        for (int i = 0; i < n-1; i++) {
            if (v[i]>v[i+1]) {
                cout << 0 << '\n';
                flag=true;
                break;
            }
        }
        if(!flag){
            int mini=INT_MAX;
            for (int i = 0; i < n-1; i++) {
                int diff = v[i+1] - v[i];
                int steps = (diff / 2) + 1;
                mini = min(mini, steps);
            }
            cout << mini << '\n';
        }
    }
    
    return 0;
}
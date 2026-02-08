#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t != 0) {
        string s, ans;
        getline (cin, s);
        
        int len = s.size();
        ans.push_back(s[0]);
        
        for (int i = 1; i < len; i++) {
            if (s[i] == ' ' && i+1 < len) {
                ans.push_back(s[i+1]);
            }
        } cout << ans << '\n';
        t--;
    }
    return 0;
}
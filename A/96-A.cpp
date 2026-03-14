#include <bits/stdc++.h>
using namespace std;

int main() {
    string bi;
    cin >> bi;
    int len = bi.length(), counter = 0;
    bool yes = false;
    
    for (int i = 0; i < len-1; i++) {
        if (bi[i]==bi[i+1]) counter++;
        else counter=0;
        
        if (counter==6) {
            cout << "YES";
            yes = true; 
            break;
        }
    }
    
    if (yes==false) cout << "NO";
    
    return 0;
}

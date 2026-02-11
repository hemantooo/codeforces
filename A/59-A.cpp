#include <bits/stdc++.h>
using namespace std;
    
int main() {
    string str;
    cin >> str;
    int len = str.length(), upper = 0;
    
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) upper++;
    }
    
    if (upper>(len/2)) {
        for (int i = 0; i < len; i++) {
            str[i]=toupper(str[i]);
        }
    }
    else {
        for (int i = 0; i < len; i++) {
            str[i]=tolower(str[i]);
        }
    }
    cout << str;
    return 0;
}
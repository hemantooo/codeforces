#include <bits/stdc++.h>
using namespace std;
    
int main() {
    string str;
    cin >> str;
    if (islower(str[0]))
        str[0] = str[0] - 32;
    cout << str;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
    
int main() {
    string str;
    cin >> str;
    sort (str.begin(), str.end());
    
    int len = str.length(), counter=0;
    for (int i = 0; i < len-1; i++) {
        if (str[i]!=str[i+1]) counter++;
    }
    if (counter%2!=0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
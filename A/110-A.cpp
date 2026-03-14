#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int counter=0;
    cin >> n;
    
    while (n!=0) {
        int digit = n%10;
        if (digit==7 || digit==4) counter++;
        
        n/=10;
    }
    
    if (counter==0) {
        cout << "NO";
        return 0;
    }
    
    while (counter!=0) {
        int digit = counter%10;
        
        if (digit!=7 && digit!=4) {
            cout << "NO";
            return 0;
        }
        
        counter/=10;
    }
    
    cout << "YES";
    return 0;
}

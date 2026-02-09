#include<bits/stdc++.h>
using namespace std;
int main () {
    int t,n;
    cin >> t;
    while (t!=0) {
        int counter_o=0, counter_e=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i<n; i++) {
            cin >> arr[i];
            if (arr[i]%2==0) counter_e++;
            if (arr[i]%2!=0) counter_o++;
        }
        if (counter_e==n || counter_o==n) {
            for (int i = 0; i<n; i++) {
                cout << arr[i] << " ";
            }
        }
        else {
            sort(arr, arr+n);
            for (int i = 0; i<n; i++) {
                cout << arr[i] << " ";
            }
        }
        cout << "\n";
        t--;
    }
    return 0;
}   
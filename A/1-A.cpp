#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,a;
	cin >> n >> m >> a;
	
	int n1,m1;
	if (n%a==0) n1=n/a;
	else n1=n/a+1;
	if (m%a==0) m1=m/a;
	else m1=m/a+1;
	
	cout << (long long) n1*m1;
}

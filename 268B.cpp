#include <bits/stdc++.h>
using namespace std;
#define lli long long int


int main() {
	lli n,sum=0;
	cin >> n;

	for(int i=n;i>0;i--)
	{
		sum += (n-i)*i;
	}
	cout << sum+n << endl;
	return 0;
}
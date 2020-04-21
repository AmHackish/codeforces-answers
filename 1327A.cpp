#include <bits/stdc++.h>
using namespace std;
#define lli long long int


int main() 
{
	int t;
	cin >> t;

	while(t--)
	{
		lli n,k;
		cin >> n >> k;
		if(n%2 == 0 and k%2!=0)
			cout << "NO" << endl;
		else if(n%2!=0 and k%2 == 0)
			cout << "NO" << endl;
		else if(k <= sqrt(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int t;
	cin >> t;

	while(t--)
	{
		lli n;
		cin >> n;
		lli ans=0,pw=1000*1000*1000;
		while(n>0)
		{
			while(n<pw)
				pw/=10;
			ans+=pw;
			n-=pw-pw/10;
		}
		cout << ans << endl;
	}
	return 0;
}
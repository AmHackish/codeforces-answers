#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int t;
	cin >> t;

	while(t--)
	{
		lli n,m;
		cin >> n >> m;
		
		if(n>m)
		{
			if(m*2>=n and (n+m)%3 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
		{
			if(n*2>=m and (n+m)%3 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
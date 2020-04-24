#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,a,b,c,d;
		cin >> n >> a >> b >> c >> d;

		if(n*(a-b) > c+d)
			cout << "No" << endl;
		else if(n*(a+b) < abs(c-d))
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;	
}
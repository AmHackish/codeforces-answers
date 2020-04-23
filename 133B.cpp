#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<lli> a(n),b(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		for(int j=0;j<n;j++)
			cin >> b[j];

		vector<int> good(2,0);
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>b[i] and !good[0])
			{
				ans++;
				break;
			}
			else if(a[i]<b[i] and !good[1])
			{
				ans++;
				break;
			}
			if(a[i] == -1)
				good[0] = 1;
			if(a[i] == 1)
				good[1] = 1;
		}
		if(ans == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
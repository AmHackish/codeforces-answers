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

		vector<lli> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		int index = 0;
		bool ans = false;
		for(int i=0;i<n-1;i++)
		{
			if(abs(a[i]-a[i+1])>=2)
			{
				ans = true;
				index = i;
				break;
			}
		}
		if(ans)
			cout << "YES" << endl << index+1 << " " << index+2 << endl;
		else
			cout << "NO" << endl;
	}

}
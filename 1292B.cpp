#include <bits/stdc++.h>
using namespace std;
 
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fo(i,a,b) for(long long int i=a;i<b;i++)
#define no cout << "NO" << endl
#define yes cout << "YES" << endl 
#define sorti(a) sort(a.begin(),a.end())

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		lli n;
		cin >> n;
		
		vector<lli> v(n);
		fo(i,0,n) cin >> v[i];

		int pos = n,k=1;
		for(int i=0;i<n;i++)
			if(v[i]<i)
			{
				pos = i-1;
				break;
			}

		if(pos!=n)
		{
			for(int i=pos+1;i<n;i++)
			{
				if(v[i] >= v[i-1])
				{
					v[i] = v[i-1]-1;
					if(v[i]<0)
					{
						k = 0;
						break;
					}
				}
			}
		}
		if(k or pos == n)
				cout << "yes" << endl;
			else
				cout << "No" << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fo(i,a,b) for(long long int i=a;i<b;i++)
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
 
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		lli a,b,c,r,d=0,e=0,step=0;
		cin >> a >> b >> c >> r;

		d = c-r;
		e = c+r;
		if(a<d and b<d)
			step += abs(a-b);
		else if(a>e and b>e)
			step += abs(a-b);
		else
		{	
			step = 0;
			if(a<d)
				step += abs(a-d);
			else if(a>e)
				step += abs(a-e);
			if(b>e)
				step += abs(b-e);
			else if(b<d)
				step += abs(d-b);
		}
		cout << step << endl;
	}
	return 0;
}
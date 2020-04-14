#include <bits/stdc++.h>
using namespace std;
 
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fo(i,a,b) for(long long int i=a;i<b;i++)
#define no cout << "NO" << endl
#define yes cout << "YES" << endl 
#define sort(a) sort(a.begin(),a.end())
 
int main()
{
	int a,b,c,d,e,f,cost=0;
	cin >> a >> b >> c >> d >> e >> f;
	if(e>f)
	{
		if(a>d)
		{
			cost += d*e;
			a=a-d;
			d = 0;
		}
		else
		{
			cost += a*e;
			d = d-a;
		}
		cost += f*(min(b,min(c,d)));
	}
	else
	{
		cost += f*(min(b,min(c,d)));
		d -= cost/f;
		cost += (min(a,d))*e;
	}
	cout << cost << endl;
	return 0;
}
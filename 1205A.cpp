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
	int n;
	cin >> n;

	vector<int> v(2*n+1);
	if(n%2 == 0)
		no;
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(i%2 == 0)
			{
				v[i] = 2*i;
				v[i+n] = 2*i-1;
			}
			else
			{
				v[i] = 2*i-1;
				v[i+n] = 2*i;
			}
		}
		yes;
		for(int i=1;i<=2*n;i++)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
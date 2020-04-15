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
	int t;
	cin >> t;

	while(t--)
	{
		vector<int> v(3);
		cin >> v[0] >> v[1] >> v[2];

		sort(v);
		if(v[2]>v[1]+v[0])
			cout << v[0]+v[1] << endl;
		else
			cout << (v[0]+v[1]+v[2])/2 << endl;
	}
	return 0;
}
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
	lli n;
	cin >> n;

	map<lli,lli> m;
	m[n]++;
	while(m[n]<2)
	{
		n++;
		while(n%10 == 0)
			n = n/10;
		m[n]++;
	}
	cout << m.size() << endl;  
	return 0;
}
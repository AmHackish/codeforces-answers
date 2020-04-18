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

	while(n--)
	{
		int m,a,b;
		cin >> m >> a >> b;

		for(int i=0;i<m;i++)
			cout << char('a'+i%b);
		cout << endl;
	}
	return 0;
}
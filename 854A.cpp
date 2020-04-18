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

	if(n%2 == 0)
	{
		if((n/2)%2 == 0)
			cout << n/2-1 << " " << n/2+1 << endl;
		else
			cout << n/2-2 << " " << n/2+2 << endl;

	}
	else
		cout << n/2 << " " << n/2+1 << endl;
	return 0;
}
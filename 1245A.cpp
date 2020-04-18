#include <bits/stdc++.h>
using namespace std;
 
typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fo(i,a,b) for(long long int i=a;i<b;i++)
#define no cout << "NO" << endl
#define yes cout << "YES" << endl 
#define sort(a) sort(a.begin(),a.end())

int gcd(int a,int b)
{
	if(a == 0)
		return b;
	if(b == 0)
		return a;
	if(a == b)
		return a;
	if(a>b)
		return gcd(a-b,a);
	else
		return gcd(a,b-a);
}
int main()
{
	int n;
	cin >> n;

	while(n--)
	{
		int a,b;
		cin >> a >> b;

		if(gcd(a,b) == 1)
			cout << "Finite" << endl;
		else
			cout << "Infinite" << endl;
	}
	return 0;
}
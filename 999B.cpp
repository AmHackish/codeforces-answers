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

	string s;
	cin >> s;

	for(int i=1;i<=n;i++)
	{
		if(n%i == 0)
			reverse(s.begin(),s.begin()+i);
	}
	cout << s << endl;
	return 0;
}
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
	map<char,int>m;

	while(n--)
	{
		string s;
		cin >> s;

		m[s[0]]++;
	}

	int cnt=0,x=0,y=0;
	auto it = m.begin();

	while(it !=m.end())
	{
		x = it->second /2;
		y = it->second -x;

		if(x == 0 or x == 1)
			x = 0;
		else
			x = (x*(x-1))/2;

		if(y == 0 or y == 1)
			y = 0;
		else
			y = (y*(y-1))/2;

		cnt += (x+y);
		it++;
	}
	cout << cnt << endl;
	return 0;
}
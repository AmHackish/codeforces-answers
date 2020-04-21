#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int n;
	cin >> n;

	vector<pair<lli,lli>>  x(n);
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		x[i] = make_pair(a,b);
	}
	sort(x.begin(),x.end());
	int ans=-1;
	for(int i=0;i<n;i++)
	{
		if(ans<=x[i].second)
			ans = x[i].second;
		else
			ans = x[i].first;
	}
	cout << ans << endl;
	return 0;
}
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
	int n,c;
	cin >> n >> c;

	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];

	int ans=0;
	for(int i=0;i<n-1;i++)
	{
		ans = max((a[i]-a[i+1]-c),ans);
	}
	cout << ans << endl;
	return 0;
}
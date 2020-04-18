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
		int m;
		cin >> m;

		vector<int> a(m+1);
		for(int i=0;i<m;i++)
		{
			int x;
			cin >> x;
			a[x]++;
		}
		sort(a);
		int cnt = a[m];
		int si = m+1 - count(a.begin(),a.end(),0);
		cout << max(min(si-1,cnt),min(si,cnt-1)) << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fo(i,a,b) for(long long int i=a;i<b;i++)
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define sort(a) sort(a.begin(),a.end())
 
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> a(n),b(n);
		fo(i,0,n) cin >> a[i];
		fo(i,0,n) cin >> b[i];

		sort(a);sort(b);

		fo(i,0,n) cout << a[i] << " ";
		cout << endl;
		fo(i,0,n) cout << b[i] << " ";
	}
	return 0;
}
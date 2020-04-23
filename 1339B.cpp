#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<lli> a(n),ans(n);
		for(int i=0;i<n;i++)
			cin >> a[i];

		sort(a.begin(),a.end());
		int cnt=0;
		for(int i=0;i<n;i+=2)
		{
			ans[i] = a[cnt];
			cnt++;
		}
		cnt = n-1;
		for(int i=1;i<n;i+=2)
		{
			ans[i] = a[cnt];
			cnt--;
		}
		reverse(ans.begin(),ans.end());
		for(int i=0;i<n;i++)
			cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}
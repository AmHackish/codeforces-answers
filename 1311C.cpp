#include <bits/stdc++.h>
using namespace std;
#define lli long long int

vector<int> v(1007);
vector<int> re(1007);
int f(int a)
{
	for(int i=2;i<=a;i++)
		if(a%i == 0)
			return i;
}
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			v[f(a[i])].push_back(i);
		}
		int cnt=0;
		for(int i=1;i<=1000;i++)
		{
			if(ans[i].size())
			{
				cnt++;
				for(auto x:ans[i])
					re[x] = cnt;
			}
		}
		cout << cnt << endl;
		for(int i=0;i<=n;i++)
			cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}
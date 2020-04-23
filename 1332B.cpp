#include <bits/stdc++.h>
using namespace std;
#define lli long long int

vector<int> v[1007];
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

		for(int i=1;i<=1000;i++)
			v[i].clear();
		for(int i=1;i<=n;i++)
		{
			int x;
			cin >> x;
			v[f(x)].push_back(i);
		}
		int cnt=0;
		for(int i=1;i<=1000;i++)
		{
			if(v[i].size())
			{
				cnt++;
				for(auto x:v[i])
					re[x] = cnt;
			}
		}
		cout << cnt << endl;
		for(int i=1;i<=n;i++)
			cout << re[i] << " ";
		cout << endl;
	}
	return 0;
}
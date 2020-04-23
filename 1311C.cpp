#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;

		string s;
		cin >> s;

		vector<int>p(m);
		for(int i=0;i<m;i++)
			cin >> p[i];

		sort(p.begin(),p.end());
		
		vector<lli> a(26,0);
		
		for(int i=0;i<n;i++)
		{
			int k = lower_bound(p.begin(),p.end(),i+1)-p.begin();
			if(k<m)
				a[s[i]-'a'] += (m-k);
		}
		for(int i=0;i<n;i++)
			a[s[i]-'a']++;
		for(int i=0;i<26;i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
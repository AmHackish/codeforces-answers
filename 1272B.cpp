#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int n;
	cin >> n;
	
	while(n--)
	{
		string s;
		cin >> s;

		string moves = "LRUD";
		map<char,int> m;
		for(auto c:s)
			m[c]++;
		int h = min(m['U'],m['D']);
		int v = min(m['L'],m['R']);
		if(min(h,v) == 0)
		{
			if(h == 0)
			{
				v = min(v,1);
				cout << 2*v << endl << string(v,'L')+string(v,'R') << endl;
			}
			else
			{
				h = min(h,1);
				cout << 2*h << endl << string(h,'U')+string(h,'D') << endl;
			}
		}
		else
		{
			string res;
			res += string(v,'R');
			res += string(h,'U');
			res += string(v,'L');
			res += string(h,'D');
			cout << res.size() << endl << res << endl;
		}
	}
}
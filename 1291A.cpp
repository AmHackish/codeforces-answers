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
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		string s;
		int odd =0,even=0,sum=0;
		cin >> s;
		for(int i=0;i<n;i++)
		{
			int k = s[i]-'0';
			if(k%2!=0)
				odd++;
			sum += k;
		}

		if(sum%2 == 0)
		{
			if(s[s.length()-1]%2!=0)
				cout << s << endl;
			else
			{
				if(odd == 0)
					cout << -1 << endl;
				else
				{
					for(int i=0;i<s.length();i++)
					{
						if((s[i]-'0')%2!=0)
							cout << s[i];
					}
					cout << endl;
				}
			}
		}
		else
		{
			if(odd == 1)
				cout << -1 << endl;
			else
			{
				odd--;
				for(int i=0;i<s.length() and odd!=0;i++)
				{
					int k = s[i]-'0';
					if(k%2 != 0)
					{
						cout << s[i];
						odd--;
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int n;
	cin >> n;
	string s,b;
	cin >> s;
	b = s;
	vector<int> go,ka;
	for(int i=0;i<n-1;i++)
	{
		if(s[i] == 'B')
		{
			s[i] = 'W';
			if(s[i+1] == 'B')
				s[i+1] = 'W';
			else
				s[i+1] = 'B';
			go.push_back(i+1);
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(b[i] == 'W')
		{
			b[i] = 'B';
			if(b[i+1] == 'B')
				b[i+1] = 'W';
			else
				b[i+1] = 'B';
			ka.push_back(i+1);
		}
	}
		
	sort(s.begin(),s.end());
	sort(b.begin(),b.end());
	if(go.size()<ka.size())
	{
		if(s[0] == s[n-1])
		{
			cout << go.size() << endl;
			if(go.size())
			{
				for(int i=0;i<go.size();i++)
					cout << go[i] << " ";
				cout << endl;
			}
		}
		else if(b[0] == b[n-1])
		{
			cout << ka.size() << endl;
			if(ka.size())
			{
				for(int i=0;i<ka.size();i++)
					cout << ka[i] << " ";
				cout << endl;
			}
		}
		else 
			cout << -1 << endl;
	}
	else
	{
		if(b[0] == b[n-1])
		{
			cout << ka.size() << endl;
			if(ka.size())
			{
				for(int i=0;i<ka.size();i++)
					cout << ka[i] << " ";
				cout << endl;
			}
		}
		else if(s[0] == s[n-1])
		{
			cout << go.size() << endl;
			if(go.size())
			{
				for(int i=0;i<go.size();i++)
					cout << go[i] << " ";
				cout << endl;
			}
		}
		else 
			cout << -1 << endl;
	}
	
}
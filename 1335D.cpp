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
		vector<string> v(9);
		for(int i=0;i<9;i++)
			cin >> v[i];

		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				if(v[i][j] == '2')
					v[i][j] = '1';
			}
		}
		for(int i=0;i<9;i++)
			cout << v[i] << endl;
	}
	return 0;
}
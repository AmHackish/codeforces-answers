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

		vector<int> a(m);
		set<int> s;
		for(int i=0;i<m;i++)
		{
			cin >> a[i];
			s.insert(a[i]);
		}

		sort(a);
		int cnt=0,si=s.size();
		for(int i=0;i<m;i++)
		{
			int k=0,j=i;
			while(a[i] == a[j] and j<m)
			{
				k++;
				j++;
			}
			i+=j+1;
			cnt = max(cnt,k);
		}
		if(si>=cnt)
			si--;
		
		cout << min(si,cnt) << endl;
	}
	return 0;
}
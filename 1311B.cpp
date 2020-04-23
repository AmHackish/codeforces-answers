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

		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin >> arr[i];

		vector<bool> used(n,false);
		vector<int>p(m);
		for(int i=0;i<m;i++)
			cin >> p[i];

		for(int i=0;i<m;i++)
			used[p[i]-1]=true;

		for(int i=0;i<n;i++)
		{
			if(!used[i])
				continue;
			int pos = i;
			while(pos<n and used[pos])
				pos++;
			sort(arr.begin()+i,arr.begin()+pos+1);
			i = pos;
		}
		bool ok = true;
		for(int i=0;i<n-1;i++)
			if(arr[i]>arr[i+1])
				ok = false;
		if(ok)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int t;
	cin >> t;

	while(t--)
	{
		lli n,x;
		cin >> n >> x;

		vector<lli> a(n);
		for(int i=0;i<n;i++)
			cin >> a[i];
		
		sort(a.begin(),a.end());
		lli cnt=0,sum =0;
		int j;
		for(j=n-1;j>=0;j--)
		{	
			if((sum+a[j])>=x*(cnt+1))
			{
				cnt++;
				sum+=a[j];
			}
			else
				break; 
		}
		cout << cnt << endl;
	}

	return 0;
}
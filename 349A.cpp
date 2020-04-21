#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	int n;
	cin >> n;

	vector<int> x(n);
	for(int i=0;i<n;i++)
		cin >> x[i];
	int c1=0,c2=0;
	for(int i=0;i<n;i++)
	{
		if(x[i] == 25)
		{
			c1++;
			continue;
		}
		if(x[i] == 50 and c1!=0)
		{
			c2++;
			c1--;
			continue;
		}
		if(x[i] == 100 and c1!=0 and c2!=0)
		{
			c1--;
			c2--;
			continue;
		}
		if(x[i] == 100 and c1>=3 and c2==0)
		{
			c1-=3;
			continue;
		}		
		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
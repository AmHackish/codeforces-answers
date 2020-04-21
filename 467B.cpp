#include <bits/stdc++.h>
using namespace std;
#define lli long long int


int main() {
	int n,m,k;
	cin >> n >> m >> k;

	vector<lli> x(m+1);
	for(int i=0;i<=m;i++)
		cin >> x[i];

	lli cnt=0,res=0;
	for(int i=0;i<m;i++)
	{
		res = x[m]^x[i];
		if(__builtin_popcount(res)<=k)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
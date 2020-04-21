#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	double n,l;
	cin >> n >> l;

	vector<double>a(n),b;
	for(int i=0;i<n;i++)
		cin >> a[i];

	if(n == 1)
	{
		cout << max(a[0],l-a[0]) << endl;
		return 0;
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n-1;i++)
		b.push_back(a[i+1]-a[i]);

	sort(b.begin(),b.end());
	double k = b[b.size()-1]/2;
	double i = max(a[0],l-a[n-1]);
	if(k>i)
		i = k;
	cout << setprecision(9) << i << endl;
	return 0;
}
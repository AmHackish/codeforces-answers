#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fo(i,a,b) for(long long int i=a;i<b;i++)
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
 
int main()
{
	lli h1,m1,h2,m2;
	char c1,c2;
	cin >> h1 >>c1 >>  m1 >> h2 >> c2 >>  m2;

	lli min = (((h2-h1)*60) + (m2-m1))/2;
	lli x = h1+(min/60);
	lli y = m1+(min%60);
	if(y >= 60)
		x++;
	if(x<10)
		cout << 0;
	cout << x << ":";

	if(y >= 60)
		y-=60;
	if(y < 10)
		cout << 0; 
	cout << y << endl;
	return 0;
}
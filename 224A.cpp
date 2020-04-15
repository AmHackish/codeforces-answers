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
	int a1,a2,a3;
	cin >> a1 >> a2 >> a3;

	float a,b,c,area=0;
	a = sqrt((a1*a3)/a2);
	a += sqrt((a2*a1)/a3);
	a += sqrt((a2*a3)/a1);
	cout << 4*a << endl;
	return 0;
}
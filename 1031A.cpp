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
	int w,h,k,tiles=0;
	cin >> w >> h >> k;

	h-=2;
	while(k--)
	{
		tiles += w*2;
		tiles += h*2;
		w-=4;
		h-=4;
	}
	cout << tiles << endl;
	return 0;
}
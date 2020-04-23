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
		vector<vector<char>> a(n+1,vector<char> (m+1));
		
		a[0][0]='a';
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i==1 && j==1)
                    a[i][j]='W';
                else
                    a[i][j]='B';
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
	}
	return 0;
}
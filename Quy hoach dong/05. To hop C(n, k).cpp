#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];
int Mod = 1e9 + 7;

void solve()
{
	for(int i = 0; i<= 1000; i++)
	{
		for(int j = 0; j<= i; j++)
		{
			if(j == 0 || j == i)
				a[i][j] = 1;
			else
			if(j == 1 || j == i-1)
				a[i][j] = i;
			else a[i][j] = a[i-1][j] + a[i-1][j-1];
			a[i][j] %= Mod;
		}
		
		
	}
}

int main()
{
	solve();
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		cout << a[n][k] << endl;
	}
}



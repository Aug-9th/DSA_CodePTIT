#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int a[103][103];

void ct(int i, int j){
	if (i == n - 1 && j == m - 1){
		ans++;		
		return;
	}
	if (i < n - 1) ct(i + 1, j);
	if (j < m - 1) ct(i, j + 1);
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		ct(0, 0);		
		cout << ans << endl;
	}
}

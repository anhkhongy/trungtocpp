#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, s = 0;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == k)
				s++;
		}
		if (s == 0)
			cout << -1 << endl;
		else
			cout << s << endl;
	}
}

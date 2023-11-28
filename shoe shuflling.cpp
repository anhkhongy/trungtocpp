#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, i, s[100001], tt;
	cin>>t;
	while (t--)
	{
		cin>>n;
		tt=1;
		s[n+1]=-1;
		for (i=1; i<=n; i++) cin>>s[i];
		for (i=1; i<=n; i++)    
		if (s[i]!=s[i-1] && s[i]!=s[i+1])tt=-1;
		if (tt!=-1)
		{
			for (i=1; i<=n; i++)
				if (s[i]!=s[i+1]){ cout<<tt<<" "; tt=i+1; } else cout<<i+1<<" ";
		} else cout<<-1;
		cout<<endl;
	}
}

#include<bits/stdc++.h>
 
using namespace std;
bool f(int x) {for(int i=2;i*i<=x;i++) if(!(x%i)) return 0;return 1;}
int t,n,x,y;
int main()
{
	for(cin >> t;t--;)
	{
		cin >> n;
		for(x=n+1;!f(x);x++); for(y=n+x;!f(y);y++);
		cout << x*y << endl;
	}
}

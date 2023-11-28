#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string s;
		cin>>s;
		int z=0;
		for(auto& i:s) z+=i=='0';
		if(z%2==1&&z>=3) puts("ALICE");
		else puts("BOB");
	}
	return 0;
}

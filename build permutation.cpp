#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void solve(int r){
	if(r<0)return;
	int s=sqrt(2*r);s*=s;
	int l=s-r;
	solve(l-1);
	for (int i=l;i<=r;i++){
		cout<<s-i<<' ';
	}
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		solve(n-1);
		cout<<endl;
	}
	return 0;
}

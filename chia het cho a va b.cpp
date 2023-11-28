#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lcm(int a,int b){
	return a*b/__gcd(a,b);
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int m,n,a,b;
		cin>>m>>n>>a>>b;
		int cnt=0;
		for(int i=m;i<=n;i++){
			if(i%a==0)cnt++;
			if(i%b==0)cnt++;
			if(i%lcm(a,b)==0)cnt--;
		}
		cout<<cnt<<endl;
	}
	return 0;
}

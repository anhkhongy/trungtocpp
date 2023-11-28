#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct kn{
	int nd,nv,st;
};
bool cmp(kn x,kn y){
	if(x.nd==y.nd&&x.nv==y.nv){
		return x.st<y.st;
	}
	if(x.nd==y.nd){
		return x.nv<y.nv;
	}
	
	return x.nd<y.nd;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	kn s[100];
	for (int i=1;i<=n;i++){
		cin>>s[i].nd>>s[i].nv>>s[i].st;
	}
	sort(s+1,s+n+1,cmp);
	for (int i=1;i<=n;i++){
		cout<<s[i].nd<<s[i].nv<<s[i].st<<endl;
		
	}
	return 0;
}

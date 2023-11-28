#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k,a[100],ok;
void kt(){
	for (int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		--i;
	}
	if (i==0){
		ok=0;
	}
	else {
		a[i]=1;
	}
}
bool check(){
	int res=0;
	for (int i=1;i<=n;i++){
		res+=a[i];
	}
	return res==k;
}
int main(int argc, char** argv) {
	cin>>n>>k;
	ok=1;
	kt();
	while(ok){
		if (check()){
		
		for (int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;}
		
		sinh();
	}
	return 0;
}

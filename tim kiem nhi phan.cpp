#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tknp(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x)return m;
		else if(a[m]<x){
			l=m+1;
		}
		else r=m-1;
	}
	return 0;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		if(tknp(a,n,x)!=0){
			cout<<tknp(a,n,x)+1<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}

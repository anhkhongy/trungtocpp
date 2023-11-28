#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ls(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if (a[m]==x){
			res=m;
			r=m-1;
		}
		else if (a[m]<x){
			l=m+1;
		}
		else r=m-1;
	}
	return res;
}
int main(int argc, char** argv) {
	int n,x;
	cin>>n>>x;
	int a[n];
	for (int &x:a){
		cin>>x;
	}
	int b=ls(a,n,x);
	cout<<b;
	return 0;
}

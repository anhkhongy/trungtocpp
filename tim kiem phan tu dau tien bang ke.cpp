#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int timkiem(int a[],int n,int x){
	int res=-1;
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m+1;
			r=m-1;
		}
		else if (a[m]<x){
			l=m+1;
		}
		else {
			r=m-1;
		}
	}
	return res;
}
int main(int argc, char** argv) {
	int n,x;
	cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		
	}
	cout<<timkiem(a,n,x);
	return 0;
}

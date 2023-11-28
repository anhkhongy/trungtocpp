#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool ls(int a[],int n,int x){
	int l=0;int r=n-1;
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]==x){
			return true;
		}
		else if (a[m]<x){
			l=m+1;
		}
		else r=m-1;
	}
}
int main(int argc, char** argv) {
	int n,x;
	cin>>n>>x;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	if (ls(a,n,x)){
		cout<<"found";
	}
	else "not found";
	return 0;
}

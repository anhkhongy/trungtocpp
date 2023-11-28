#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int x:b){
		cin>>x;
	}
	int i=0,j=0;
	while(i<n&&j<m){
		if (a[i]<=b[j]){
			cout<<'a'<<i+1<<' ';
			++i;
		}
		else cout<<'b'<<j+1<<' ';
		++j;
	}
	while(i<n){
		cout<<'a'<<i+1<<' ';
		++i;
	}
	while(j<m){
		cout<<'b'<<j+1<<' ';
		++j;
	}
	
}


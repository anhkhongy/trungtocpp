#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	int m=0,k=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1){
			b[i]=m+1;
			++m;
			c[i]=k;
		}
		else if(a[i]==0){
			c[i]=k+1;
			++k;
			b[i]=m;
		}
	}
	int ma=0;
	long long tong=0;
	for (int i=0;i<n;i++){
		if(a[i]==1){
			tong+=k-c[i];
			ma=max(ma,b[i]-1-(k-c[i]));
		}
		else if(a[i]==0){
			ma=max(ma,(k-c[i])-b[i]);
		}
	}
	cout<<tong+ma<<endl;}
	return 0;
}

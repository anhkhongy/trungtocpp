#include<bits/stdc++.h>
using namespace std;
 
int n,m,x[1005];
int a[1005];
unordered_map<int,int>mp;
void Try(int i) {
	for(int j=1;j<=4;j++) {
		x[i]=a[j];
		mp[x[i]]++;
		if(i==m) {
			if(mp[2]&&mp[3]&&mp[5]&&mp[7]>0&&x[m]!=2) {
				for(int k=1;k<=m;k++){
					cout<<x[k];
				}
				cout<<endl;
			}
		}
		else Try(i+1);
		mp[x[i]]--;
	}
}
main( ){
	a[1]=2;
	a[2]=3;
	a[3]=5;
	a[4]=7;
	cin>>n;
	for(int i=4;i<=n;i++) {
		m=i;
		Try(1);
	}
}

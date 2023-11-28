#include<bits/stdc++.h>
using namespace std;
int t,n,k,x;
int check(int x,int k){
	if(x>=10*k)return 1;
	while(x>=0)if(x%10!=k)x-=k;else return 1;
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		while(n--)cin>>x,cout<<(check(x,k)?"yes\n":"no\n");
	}
} 

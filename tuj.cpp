#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool ntcn(long long a,long long b){
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else b-=a;
	}
	if(a==1)return true;
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long tong =0,t1,t2;
		for (long long i=1;i<=n;i++){
			tong+=i;
		}
		if(tong<=m)cout<<"No"<<endl;
		else{
			if((tong+m)%2==0){
				t1=(tong+m)/2;
				t2=tong-t1;
				
				if(ntcn(t1,t2)){
					cout<<"Yes"<<endl;
				}
				else cout<<"No"<<endl;
			}
			else cout<<"No"<<endl;
		}
	}
	return 0;
}

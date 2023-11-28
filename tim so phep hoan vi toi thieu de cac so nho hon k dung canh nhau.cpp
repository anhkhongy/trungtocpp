#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		
		cin>>n>>k;
		int a[n];
		int cnt=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=k)cnt++;
		}
		int res=0;
		for (int i=0;i<cnt;i++){
			if(a[i]<=k){
				res++;
			}
		}
		for (int i=cnt;i<n;i++){
			int tmp=res;
			if(a[i-cnt]<=k){
				tmp--;
			}
			if(a[i]==k)tmp++;
			if(tmp>res){
				res=tmp;
			}
		}
		cout<<cnt-res<<endl;
	}
	return 0;
}

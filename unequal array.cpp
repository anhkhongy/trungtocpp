#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int l=1,r=0;
		int a=0,b;
		for (int i=1;i<=n;i++,a=b){
			cin>>b;
			if(a==b){
				r=i-1;
				if(l==1){
					l=i;
				}
			}
		}
		if(l>=r){
			cout<<r-l+1<<endl;
		}
		else cout<<r-l<<endl;
	}
	return 0;
}

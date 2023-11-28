#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			string a;
			cin>>a;
			int ans=-1;
			for (char c='a';c<='z';c++){
				int cnt=0,l=0,r=n-1;
			
				while(l<r){
					if(a[l]==a[r]){
						++l;
						--r;
					}
					else {
						if(a[l]==c){
							++l;
							cnt++;
						}
						else if(a[r]==c){
							--r;
							cnt++;
						}
						else {
							cnt=1e9;
							break;
						}
					}
				}
				if(cnt!=1e9&&(ans==-1||ans>cnt)){
					ans=cnt;
				}
			}
			cout<<ans<<endl;
		}
	
	return 0;
}

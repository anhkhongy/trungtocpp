#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		bool ok=true;
		if(x!=0&&y!=0||x==0&&y==0){
			ok=false;
		}
		else {
			if(x==0){
				if((n-1)%y!=0){
					ok=false;
				}
				else{
					for (int i=2;i<=n;i+=y){
						for (int j=1;j<=y;j++){
							cout<<i<<" ";
						}
					}
				}
			}
			else {
				if((n-1)%x!=0){
					ok=false;
				}
				else{
					for (int i=1;i<=n;i+=x+1){
						for (int j=1;j<=x;j++){
							cout<<i<<" ";
						}
					}
				}
			}
		}
		if(!ok){
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

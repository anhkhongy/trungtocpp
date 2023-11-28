#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int a,m,ok=0;
		cin>>a>>m;
		
		for (int i=0;i<m;i++){
			if((a*i)%m==1){
				ok=1;
				cout<<i<<endl;
				break;
			}
		}
		if(!ok)cout<<"-1"<<endl;
	}
	return 0;
}

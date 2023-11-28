#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		bool ok=true;
		int a[4];
		char x;
		for (int i=0;i<3;i++){
			cin>>a[i];
			cin>>x;
		}
		cin>>a[3];
		for (int i=0;i<4;i++){
			if(a[i]<0||a[i]>255){
				ok=false;
			}
		}
		if(!ok){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string x;
		cin>>x;
		string y;
		cin>>y;
		int k=0;
		bool ok=true;
		for (int i=0;i<y.length();i++){
			if(y[i]>='A'&&y[i]<='Z'){
				if(y[i]!=char(x[k]-'0'+'A')&&y[i]!=char(x[k]-'0'+'K')){
					ok=false;
					break;
				}
				++k;
			}
		}
		if(!ok){
			cout<<"NO\n";
		}
		else cout<<"YES\n";
	}
	return 0;
}

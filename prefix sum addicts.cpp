#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long double tmp;
int n,k,s,lst;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		bool ok=true;
		cin>>s;
		tmp=s*1.0/(n-k+1);
		lst=s;
		for (int i=2;i<=k;i++){
			cin>>s;
			if(s-lst<tmp){
				ok=false;
				break;
			}
			else {
				tmp=s-lst;
				lst=s;
			}
		}
		if(ok){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}

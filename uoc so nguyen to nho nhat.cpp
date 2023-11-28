#include <bits/stdc++.h>
using namespace std;
void pt(int n){
	bool tmp=false;
	if(n==1)cout<<"1";
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				cout<<i;
				tmp=true;
				break;
			}
			
		}
		if(tmp==false)cout<<n;
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i=1;i<=n;i++){
			pt(i);
			cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}

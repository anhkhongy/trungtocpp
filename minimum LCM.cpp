#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int tmp=0;
		for (int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				tmp=i;
				break;
			}
		}
		if(tmp!=0){
			cout<<n/tmp<<" "<<n/tmp*(tmp-1)<<endl;
		}
		else {
			cout<<"1"<<" "<<n-1<<endl;
		}
	}
	return 0;
}

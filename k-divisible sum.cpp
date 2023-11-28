#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k>=n){
			if(k%n==0){
				cout<<k/n<<endl;
			}
			else {
				cout<<k/n+1<<endl;
			}
		}
		else {
			if(n%k==0){
				cout<<"1"<<endl;
			}
			else {
				cout<<"2"<<endl;
			}
		}
	}
	return 0;
}

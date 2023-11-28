#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const unsigned int M=1000000007;
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int ans=n+m;
		int sum=0;
		for (int i=1;i<ans;i++){
			sum=(sum%M+i%M)%M;
		}
		cout<<sum<<endl;
	}
	return 0;
}

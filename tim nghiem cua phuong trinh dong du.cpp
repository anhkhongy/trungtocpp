#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long b,p;
		cin>>b>>p;
		int cnt=0;
		for(long long i=1;i<=b;i++){
			long long m=pow(i,2);
			if(m%p==1){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

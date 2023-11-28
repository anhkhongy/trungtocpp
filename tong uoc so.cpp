#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n,tong=0;;
		cin>>n;
		
		for (long i=1;i<=sqrt(n);i++){
			if(n%i==0){
				tong+=i+n/i;
				if(i*i==n){
					tong-=i;
				}
			}
		}
		cout<<tong<<endl;
	}
	return 0;
}

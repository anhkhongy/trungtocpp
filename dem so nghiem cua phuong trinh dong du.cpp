#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long b,p,s=0;
		cin>>b>>p;
		for (long long i=1;i<p;i++){
			if((i*i)%p==1){
				long long k=i+p*(b/p);
				if(k>b)k-=p;
				s+=(k-i)/p+1;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}

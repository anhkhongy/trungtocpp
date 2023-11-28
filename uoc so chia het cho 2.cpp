#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0)cnt++;
				if((n/i)%2==0)cnt++;
				if(i*i==n&&n%2==0)cnt--;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool sphenic(int n){
	int tmp=0;
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		if(n%i==0){
			
			while(n%i==0){
				cnt++;
				n/=i;
			}
		}
		if(cnt>1)return false;
		else if(cnt==1)tmp++;
	}
	if(n>1)tmp++;
	if(tmp==3)return true;
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(sphenic(n))cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}

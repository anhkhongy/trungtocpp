#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int prime[10000001];
void sang(int n){
	prime[0]=0;
	prime[1]=0;
	for (int j=2;j<=n;j++){
		prime[j]=1;
	}
	int j=2;
	while(pow(j,2)<=n){
		int k=j;
		while(j*k<=n){
			prime[j*k]=0;
			++k;
		}
		++j;
	}
}
bool check(int n){
	int last=n%10;
	n/=10;
	while(n>0){
		if(n%10>last){
			return false;
		}
		n/=10;
	}
	return true;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	sang(n);
	int dem=0;
	for (int i=1;i<=n;i++){
		if(prime[i]==1&&check(i)){
			cout<<i<<" ";
			dem++;
		}
	}
	cout<<endl;
	cout<<dem;
	return 0;
}

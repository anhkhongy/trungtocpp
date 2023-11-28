#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int pow(int a,int b){
	long long res=1;
	while(b!=0){
		if(b%2==1){
			res*=a;
		}
		b/=2;
		a*=a;
	}
	return res;
}
int main(int argc, char** argv) {
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	return 0;
}

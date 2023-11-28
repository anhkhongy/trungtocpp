#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool stn(unsigned long long n){
	unsigned long long m=n;
	unsigned long long a=0;
	while (n>0){
		a=a*10+n%10;
		n=n/10;
	}
	if(a!=m)return false;
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	unsigned long long n;
	cin>>n;
	if (stn(n)==true){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;}
	return 0;
}

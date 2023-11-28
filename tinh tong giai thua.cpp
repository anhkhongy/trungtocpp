#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool ls(unsigned long n){
	while (n>0){
		int a=n%10;
		if (a!=0&&a!=6&&a!=8){
			return false;
		}
		n=n/10;
	}
	return true;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
	unsigned long n;
	cin>>n;
	if (ls(n)){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;}
	return 0;
}

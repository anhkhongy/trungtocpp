#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool ls (int n){
	int c=0,l=0;
	while (n>0){
		int a=n%10;
		if (a%2==0)c++;
		else l++;
		n=n/10;
	}
	if (c!=l)return false;
	return true;
}
int main(int argc, char** argv) {
	int n,cnt=0;
	cin>>n;
	for (int i=pow(10,n-1);i<pow(10,n);i++){
		if (ls(i)){
			cout<<i<<' ';
			cnt++;
		}
		if (cnt==10){
			cout<<endl;
			cnt=0;
		}
	}
	return 0;
}

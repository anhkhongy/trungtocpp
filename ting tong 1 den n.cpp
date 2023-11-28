#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long tong=n*(n+1)/2;
		cout<<tong<<endl;
	}
	return 0;
}

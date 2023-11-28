#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		if (n%100==86){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
	
	return 0;
}

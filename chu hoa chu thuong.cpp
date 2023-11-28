#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char a;
		cin>>a;
		if (a>='A'&&a<='Z'){
			cout<<(char)(a+32)<<endl;
		}
		else if (a>='a'&&a<='z'){
			cout<<(char)(a-32)<<endl;
		}
	}
	return 0;
}

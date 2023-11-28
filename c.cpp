#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int value=10;
	int *ptr=&value;
	int &ref=value;
	*ptr=15;
	cout<<*ptr<<endl;
	cout<<ref<<endl;
	cout<<value<<endl;
	ref=20;
	cout<<value<<endl;
	cout<<*ptr<<endl; 
	return 0;
}

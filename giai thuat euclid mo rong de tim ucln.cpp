#include <iostream>
using namespace std;
int x,y,d;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void extended(int a,int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
	}
	else {
		extended(b,a%b);
		int tmp=x;
		x=y;
		y=tmp-a/b*y;
	}
}
int main(int argc, char** argv) {
	int a,b;
	cin>>a>>b;
	extended(a,b);
	cout<<"uoc chung lon nhat: "<<d;
	return 0;
}

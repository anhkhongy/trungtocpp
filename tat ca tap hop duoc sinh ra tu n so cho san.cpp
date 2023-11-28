#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* dich trai them bit 0 vao cuoi
a<<x=a*2^x
b&1 check xem b co phai so le hay khong
*/
int main(int argc, char** argv) {
	int a[]={5,7,3,2};
	for (int i=0;i<(1<<4);i++){
		for (int j=0;j<4;j++){
			if(i&(1<<j)){
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

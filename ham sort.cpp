#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(int a,int b){
	return abs(a)<abs(b);
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		
	}
	/*sort(a,a+n);
	for (int &x:a){
		cout<<x<<endl;
	}*/
	/*giam dan*/
	/*sort(a,a+n,greater<int>());
	for (int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}*/
	/*sap xep tri tuyet doi tang dan*/
	sort(a,a+n,cmp);
	for (int x:a){
		cout<<x<<' ';
	}
	return 0;
}

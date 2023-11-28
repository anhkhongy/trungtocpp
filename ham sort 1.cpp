#include <bits/stdc++.h>
using namespace std;
// giam dan greater<kieu dl>
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
	sort(a,a+n,cmp);//stable_sort dam bao vi tri hon vi du neu trong mang 2 den -2 thi van giu nguyen dieu do
	for (int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	
	return 0;
}

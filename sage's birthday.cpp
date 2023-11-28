#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cnt=(n-1)/2;
	cout<<cnt<<endl;
	sort(a,a+n);
	int l=0,r=n-1;
	for (int i=0;i<n;i++){
		if(i%2==0){
			cout<<a[r--]<<" ";
		}
		else {
			cout<<a[l++]<<" ";
		}
	}
	return 0;
}

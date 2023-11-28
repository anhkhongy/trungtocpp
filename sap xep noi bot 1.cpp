#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int cnt=1;
	int ok=0;
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ok=1;
			}
		}
		if(ok==1){
			cout<<"Buoc "<<cnt<<":";
			for (int i=0;i<n;i++){
				cout<<" "<<a[i];
			}
			cout<<endl;
			cnt++;
		}
		ok=0;
	}
	return 0;
}

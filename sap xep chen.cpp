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
	for (int i=0;i<n;i++){
		cout<<"Buoc "<<i<<":";
		for (int j=0;j<=i;j++){
			cout<<" "<<a[j];
		}
		cout<<endl;
		int x=a[i+1];int pos=i;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
		
	}
	return 0;
}

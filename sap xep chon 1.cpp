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
	for (int i=0;i<n-1;i++){
		int mi=a[i];
		int ind=i;
		for (int j=i+1;j<n;j++){
			if(a[j]<mi){
				mi=a[j];
				ind=j;
			}
		}
		swap(a[i],a[ind]);
		cout<<"Buoc "<<i+1<<":";
		for (int k=0;k<n;k++){
			cout<<" "<<a[k];
		}
		cout<<endl;	
	}
	return 0;
}

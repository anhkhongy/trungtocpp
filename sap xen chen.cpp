#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void chen(int a[],int n){
	for (int i=1;i<n;i++){
		int x=a[i];
		int pos=i-1;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
	}
} 
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	chen(a,n);
	for (int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int ma=n-1,mi=0;
		for (int i=0;i<n;i++){
			if(i%2==0){
				cout<<a[ma]<<" ";
				ma--;
			}
			else {
				cout<<a[mi]<<" ";
				mi++;
			}
			
		}
		cout<<endl;
	}
	return 0;
}

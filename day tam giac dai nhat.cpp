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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int mi[n],ma[n];
		ma[n-1]=mi[n-1]=n-1;
		for (int i=n-2;i>=0;i--){
			if(a[i]>a[i+1]){
				mi[i]=mi[i+1];
			}
			else {
				mi[i]=i;
			}
			if(a[i]<a[i+1]){
				ma[i]=ma[i+1];
			}
			else {
				ma[i]=i;
			}
		}
		int s=0;
		for (int i=0;i<n;i++){
			s=max(s,mi[ma[i]]-i+1);
		}
		cout<<s<<endl; 
	}
	return 0;
}

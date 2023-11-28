#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool test(int a[],int l,int r){
	int k;
	int h=*max_element(a+l,a+r);
	for (int i=l;i<=r;i++){
		if(a[i]==h){
			k=i;	
		}
	}
	for (int i=l;i<=k-1;i++){
		if(a[i]>a[i+1]){
			return false;
			break;
		}
	}
	for (int i=k;i<=r-1;i++){
		if(a[i]<a[i+1]){
			return false ;
			break;
		}
	}
	return true;
}
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
		int l,r;
		cin>>l>>r;
		if(test(a,l,r)){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}

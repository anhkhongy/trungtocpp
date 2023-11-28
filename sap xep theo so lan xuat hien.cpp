#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int c[1000000]={0};
bool cmp(int a,int b){
	if(c[a]==c[b]){
		return a<b;
	}
	return c[a]>c[b];
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
			c[a[i]]++;
		}
		sort(a,a+n,cmp);
		for (int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		for (int i=0;i<1000000;i++){
			c[i]=0;
		}
	}
	return 0;
}

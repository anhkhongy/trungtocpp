#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool cmp(int a,int b){
	return to_string(a)+to_string(b)>to_string(b)+to_string(a);//to_string chuyen tu so sang mot xau.
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
		sort(a,a+n,cmp);
		for (int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x;
bool cmp(int a,int b){
	return abs(x-a)<abs(x-b);
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n>>x;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		stable_sort(a,a+n,cmp);//stable_sort co tinh on dinh .
		for (int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

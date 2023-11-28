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
		string b="";
		string c="";
		for (int i=0;i<n;i++){
			if(i%2==0){
			
			b+=char(a[i]+'0');}
			else {
			
			c+=char(a[i]+'0');}
		}
		cout<<stoll(b)+stoll(c)<<endl;
	}
	return 0;
}

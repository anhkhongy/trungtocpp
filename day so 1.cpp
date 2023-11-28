#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n),b(n);
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=0;i<n;i++){
			cout<<"["<<a[0];
			for (int j=1;j<n-i;j++){
				cout<<" "<<a[j];
				b[j-1]=a[j-1]+a[j];
			}
			for (int j=0;j<n-i-1;j++){
				a[j]=b[j];
			}
			cout<<"]"<<endl;
		}
		cout<<endl;
	}
	return 0;
}

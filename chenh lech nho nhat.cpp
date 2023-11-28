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
		int min=INT_MAX;
		for (int i=0;i<n-1;i++){
			if(a[i+1]-a[i]<min){
				min=a[i+1]-a[i];
			}
		}
		cout<<min<<endl;
	}
	return 0;
}

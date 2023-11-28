#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	int sua=0;
	for (int i=0;i<n;i++){
		if (a[i]>i){
			sua=sua+a[i]-i;
		}
		else break;
	}
	cout<<sua;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long n,s;
	cin>>n>>s;
	pair<int,int> a[n];
	for (int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n);
	bool ok=true;
	for (int i=0;i<n;i++){
		if(s<=a[i].first){
			ok=false;
			break;
		}
		else {
			s+=a[i].second;
		}
	}
	if(ok){
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
	return 0;
}

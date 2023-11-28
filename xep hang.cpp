#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	pair<int,int> a[n];
	for (int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
		
	}
	sort(a,a+n);
	int end=a[0].first+a[0].second;
	for (int i=1;i<n;i++){
		int x=max(end,a[i].first);
		end=x+a[i].second;
	}
	cout<<end<<endl;
	return 0;
}

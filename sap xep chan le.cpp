#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	vector<int>chan,le;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0)chan.push_back(a[i]);
		else if(a[i]%2==1)le.push_back(a[i]);
		
	}
	sort(chan.begin(),chan.end());
	sort(le.begin(),le.end(),greater<int>());
	int j=0,k=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout<<chan[j]<<' ';
			++j;
		}
		else {
			cout<<le[k]<<' ';
			++k;
		}
	}
	return 0;
}

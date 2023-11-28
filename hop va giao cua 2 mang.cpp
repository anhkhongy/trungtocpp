#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	vector<int> giao,hop;
	int a[n],b[m];
	for (int &x:a)cin>>x;
	for (int &x:b)cin>>x;
	int i=0,j=0;
	while(i<n&&j<m){
	
		if (a[i]<b[j]){
			hop.push_back(a[i]);
			i++;	
		}
		else if(a[i]>b[j]){
			hop.push_back(b[j]);
			j++;
		}
		else {
			hop.push_back(a[i]);
			giao.push_back(a[i]);
			i++;j++;
		}	

	}
	while(i<n){
		hop.push_back(a[i++]);
		
	}
	while(j<m){
		hop.push_back(b[j++]);
		
	}
	for (int x:hop){
		cout<<x<<' ';
	}
	return 0;
}

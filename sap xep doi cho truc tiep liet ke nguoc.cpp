#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	} 
	vector<vector<int>> v(n-1);
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				swap (a[i],a[j]);
			}
		}
		for (int k=0;k<n;k++){
			v[i].push_back(a[k]);
		}
	}
	for (int i=v.size()-1;i>=0;i--){
		cout<<"Buoc "<<i+1<<":";
		for (int j=0;j<v[i].size();j++){
			cout<<" "<<v[i][j];
		}
		cout<<endl;
	}}
	return 0;
}

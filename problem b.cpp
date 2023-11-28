#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	set<int> se;
	for (int i=0;i<n;i++){
		cin>>a[i];
		se.insert(a[i]);
	}
	int k=0;
	map<int,int> mp;
	vector<int> v;
	for (int x:se){
		mp[x]=k++;
		v.push_back(x);
	}
	for(int i=0;i<n;i++){
		if(mp[a[i]]!=0){
			cout<<v[mp[a[i]]-1]<<" ";
		}
		else {
			cout<<"# ";
		}
	}
	return 0;
}

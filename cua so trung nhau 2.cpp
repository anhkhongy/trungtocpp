#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool solve(){
	int n,k,t;
	cin>>n>>k>>t;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	set<int> s;
	for (int i=0;i<k;i++){
		auto it=s.lower_bound(a[i]-t);
		if(it!=s.end()&&*it<=a[i]+t){
			return true;
		}
		s.insert(a[i]);
	}
	for (int i=k;i<n;i++){
		s.erase(a[i-k]);
		auto it=s.lower_bound(a[i]-t);
		if(it!=s.end()&&*it<=a[i]+t){
			return true;
		}
		s.insert(a[i]);
	}
	return false ;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while (t--){
		if(solve())cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}

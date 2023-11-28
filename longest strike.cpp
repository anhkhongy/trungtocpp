#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,s,x;
		cin>>n>>s;
		map<int,int> mp;
		for (int i=0;i<n;i++){
			cin>>x;
			mp[x]++;
			mp[x-1]+=0;
		}
		int lst=-1;
		int l=0,r=-1;
		for (auto it:mp){
			if(it.second<s){
				lst=-1;
				continue;
			}
			if(lst==-1)lst=it.first;
			if((it.first-lst)>(r-l)){
				r=it.first;
				l=lst;
			}
		}
		if(r==-1){
			cout<<"-1"<<endl;
		}
		else {
			cout<<l<<" "<<r<<endl;
		}
	}
	return 0;
}

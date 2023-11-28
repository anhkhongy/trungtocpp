#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> v;
		string x;
		map<string,int> mp;
		for (int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			mp[x]++;
		}
		for (int i=0;i<n;i++){
			bool ok=false;
			for (int j=1;j<v[i].length();j++){
				if(mp[v[i].substr(0,j)]>0&&mp[v[i].substr(0+j,v[i].length()-j)]>0){
					ok=true;
					break;
				}
			}
			if(ok){
				cout<<"1";
			}
			else cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}

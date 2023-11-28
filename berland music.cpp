#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int p[n+1];
		vector<int> v1;
		vector<int> v2;
		map<int,int> mp;
		for (int i=1;i<=n;i++){
			cin>>p[i];
		}
		string s;
		cin>>s;
		for (int i=0;i<s.length();i++){
			if(s[i]=='1'){
				v1.push_back(p[i+1]);
			}
			else {
				v2.push_back(p[i+1]);
			}
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		int k=1;
		for (int x:v2){
			mp[x]=k;
			++k;
		}
		for (int x:v1){
			mp[x]=k;
			++k;
		}
		for (int i=1;i<=n;i++){
			cout<<mp[p[i]]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

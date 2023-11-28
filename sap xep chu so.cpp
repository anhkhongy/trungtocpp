#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> v(n);
		for (int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		set<int> s;
		for (int i=0;i<n;i++){
			for (int j=0;j<v[i].length();j++){
				s.insert(v[i][j]-'0');
			}
		}
		for (int x:s){
			cout<<x<<" ";
		}
		cout<<endl;
	} 
	return 0;
}

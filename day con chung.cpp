#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n],b[m],c[k];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		for (int i=0;i<m;i++){
			cin>>b[i];
		}
		for (int i=0;i<k;i++){
			cin>>c[i];
		}
		int i=0,j=0,h=0;
		
		vector<int> v;
		while(i<n&&j<m&&h<k){
			if(a[i]==b[j]&&b[j]==c[h]){
					v.push_back(a[i]);
				++i;
				++j;
				++h;
			
			}
			else if(a[i]<b[j]){
				++i;
			}
			else if(b[j]<c[h]){
				++j;
			}
			else {
				++h;
			}
		}
		if(v.size()==0){
			cout<<"NO";
		}
		else {
			for (int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

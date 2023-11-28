#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while (t--){
		int n;
		long long W;
		cin>>n>>W;
		int x;
		long long p=0,s=0;
		vector<int> v;
		for (int i=1;i<=n;i++){
			cin>>x;
			if(x<=W){
				if(x>=(W+1)/2)p=i;
				else if(s<(W+1)/2){
					v.push_back(i);
					s+=x;
				}
			}
		}
		if(p!=0){
			cout<<"1"<<endl<<p<<endl;
		}
		else if(s>=(W+1)/2){
			cout<<v.size()<<endl;
			for (int x:v){
				cout<<x<<" ";
			}
			cout<<endl;
		}
		else {
			cout<<"-1"<<endl;
		}
	}
	return 0;
}

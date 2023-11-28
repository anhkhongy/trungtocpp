#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(m),c(n+m);
	for (int &x:a){
		cin>>x;
	}
	for (int &x:b){
		cin>>x;
	}
	merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
	for (int x:c){
		cout<<x<<" ";
	}
	return 0;
}

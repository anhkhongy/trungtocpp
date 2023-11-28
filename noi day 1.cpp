#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		priority_queue<int,vector<int>,greater<int>> pq;
		int x;
		for (int i=1;i<=n;i++){
			cin>>x;
			pq.push(x);
		}
		long long s=0;
		while(pq.size()>1){
			int a=pq.top();
			pq.pop();
			int b=pq.top();
			pq.pop();
			s+=a+b;
			pq.push(a+b);
		}
		cout<<s<<endl;
	}
	return 0;
}

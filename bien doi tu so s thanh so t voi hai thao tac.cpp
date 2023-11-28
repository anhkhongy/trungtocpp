#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int solve(int s,int t){
	queue<pair<int,int>> q;//mot cai de cap nhat ket qua, mot cai de cap nhat do dai quang duong
	set<int> se;
	q.push({s,0});
	se.insert(s);
	while(!q.empty()){
		pair<int,int> a=q.front();
		q.pop();
		if(a.first==t)return a.second;
		if(a.first*2==t||a.first-1==t)return a.second+1;
		if(se.find(a.first*2)==se.end()&&a.first<t){
			q.push({a.first*2,a.second+1});
			se.insert(a.first*2);
		}
		if(se.find(a.first-1)==se.end()&&a.first>1){
			q.push({a.first-1,a.second+1});
			se.insert(a.first-1);
		}
	}
}
int main(int argc, char** argv) {
	int s,t;
	cin>>s>>t;
	cout<<solve(s,t);
	return 0;
}

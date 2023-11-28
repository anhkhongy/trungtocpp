#include <bits/stdc++.h>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using ll= long long;
vector<string> res;
void init(){
	queue<string> q;
	q.push("6");
	q.push("8");
	res.push_back("6");
	res.push_back("8");
	while(1){
		string top=q.front();
		q.pop();
		if(top.length()==4)break;
		res.push_back(top+"6");
		res.push_back(top+"8");
		
		q.push(top+"6");
		q.push(top+"8");
	}
}
int main(int argc, char** argv) {
	init();
	for (string x:res){
		cout<<x<<" ";
	}
	return 0;
}

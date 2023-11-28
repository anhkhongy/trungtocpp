#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lenstr(string s){
	stringstream ss(s);
	string tmp;
	int cnt=0;
	while(ss>>tmp){
		cnt++;
	}
	return cnt;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	int tmp;
	string s;
	
	vector<int> v;
	for (int i=0;i<n;i++){
		getline(cin,s);
		v.push_back(lenstr(s));
	}
	vector<int> ve;
	for (int i=0;i<n;i++){
		if(v[i]==6){
			while(v[i]==6)i+=2;
			ve.push_back(1);
			--i;
		}
		else {
			i+=4;
			ve.push_back(2);
			--i;
		}
	}
	cout<<ve.size()<<endl;
	for (int x:ve){
		cout<<x<<endl;
	}
	return 0;
}

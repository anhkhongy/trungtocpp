#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cach1(string s){
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		for (int i=1;i<tmp.length();i++){
			tmp[i]=tolower(tmp[i]);
		}
		v.push_back(tmp);
	}
	int n=v.size();
	cout<<v[n-1]<<" "<<v[0]<<" ";
	for (int i=1;i<n-1;i++){
		cout<<v[i]<<" ";
	}
}
void cach2(string s){
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		for (int i=1;i<tmp.length();i++){
			tmp[i]=tolower(tmp[i]);
		}
		v.push_back(tmp);
	}
	int n=v.size();
	for (int i=1;i<n-1;i++){
		cout<<v[i]<<" ";
	}
	cout<<v[n-1]<<" "<<v[0];
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		switch(n){
			
			case 1:
				cach1(s);
				break;
			case 2:
				cach2(s);
				break;
		}
		cout<<endl;
	}
	return 0;
}

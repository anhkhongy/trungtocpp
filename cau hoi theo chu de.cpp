#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	cin.ignore();
	string x;
	vector<string> v;
	map<string,int> mp;
	int cnt=0;
	for (int i=0;i<n;i++){
		getline(cin,x);
		cout<<x<<": ";
		while(getline(cin,x)){
			cnt++;
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	
	return 0;
}

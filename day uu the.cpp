#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool chan(string s){
	stringstream ss(s);
	string tmp;
	int cnt=0,c=0,l=0;
	while(ss>>tmp){
		cnt++;
		if(stoll(tmp)%2==0){
			c++;
		}
		else l++;
	}
	if(cnt%2==0&&c>l){
		return true;
	}
	return false;
}
bool le(string s){
	stringstream ss(s);
	string tmp;
	int cnt=0,c=0,l=0;
	while(ss>>tmp){
		cnt++;
		if(stoll(tmp)%2==0){
			c++;
		}
		else l++;
	}
	if(cnt%2==1&&l>c){
		return true;
	}
	return false;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(chan(s)||le(s)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}

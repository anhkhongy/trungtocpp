#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	vector<string> v;
	while(cin>>s){
		v.push_back(s);
	}
	for (int i=0;i<v.size();i++){
		for (int j=0;j<v[i].size();j++){
			v[i][j]=tolower(v[i][j]);
		}
	}
	bool check=1;//check xem co phai tu dau tien trong cau hay khong neu tu dau tien thi viet hoa chu cai dau
	for (string i:v){
		if(i[i.size()-1]=='.'||i[i.size()-1]=='?'||i[i.size()-1]=='!'){
			if(check==1){
				i[0]=toupper(i[0]);
			}
			i.erase(i.end()-1);
			if(i!="")cout<<i;
			cout<<endl;
			check=1;
		}
		else {
			if(check==1){
				i[0]=toupper(i[0]);
				cout<<i<<" ";
				check=0;
			}
			else {
				cout<<i<<" ";
			}
		}
	}
	return 0;
}


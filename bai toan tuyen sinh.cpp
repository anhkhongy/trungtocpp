#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double uutien(string s){
	if(s=="KV1"){
		return 0.5;
	}
	if(s=="KV2"){
		return 1;
	}
	if(s=="KV3"){
		return 2.5;
	}
}

int main(int argc, char** argv) {
	string ma,ten;
	double d1,d2,d3;
	getline(cin,ma);
	getline(cin,ten);
	cin>>d1>>d2>>d3;
	double dt=2*d1;
	string res="";
	res=res+ma[0]+ma[1]+ma[2];
	double dc=uutien(res);
	double tongdiem=dt+d2+d3;
	cout<<ma<<" "<<ten<<" "<<dc<<" "<<tongdiem<<" ";
	if(tongdiem+dc<24){
		cout<<"TRUOT";
	}
	else cout<<"TRUNG TUYEN";
	return 0;
}

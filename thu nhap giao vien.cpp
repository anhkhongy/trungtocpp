#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long phucap(string res){
	if(res=="HT"){
		return 2000000;
	}
	if(res=="HP"){
		return 900000;
	}
	if(res=="GV"){
		return 500000;
	}
}
int main(int argc, char** argv) {
	string ma,ten;
	long long l;
	getline(cin,ma);
	getline(cin,ten);
	cin>>l;
	string res="";
	res=res+ma[0]+ma[1];
	int hs;
	hs=(ma[2]-'0')*10+ma[3]-'0';
	long long tn=l*hs+phucap(res);
	cout<<ma<<" "<<ten<<" "<<hs<<" "<<phucap(res)<<" "<<tn;
	return 0;
}

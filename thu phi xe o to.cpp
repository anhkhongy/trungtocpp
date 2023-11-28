#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ll long long
int main(int argc, char** argv) {
	map<string,ll> res;
	string temp,type,num,check,time;
	ll n;
	cin>>n;
	for (ll i=0;i<n;i++){
		cin>>temp;
		cin>>type>>num>>check>>time;
		if(check=="IN"){
			if(type=="Xe_con"&&num=="5") res[time]+=10000;
			else if(type=="Xe_con"&&num=="7") res[time]+=15000;
			else if(type=="Xe_tai"&&num=="2") res[time]+=20000;
			else if(type=="Xe_khach"&&num=="29") res[time]+=50000;
			else if(type=="Xe_khach"&&num=="45") res[time]+=70000;
		}
	}
	for (auto it:res){
		cout<<it.first<<": "<<it.second<<endl;
	}
	return 0;
}

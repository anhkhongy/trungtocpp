#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct player{
	string user,pass,ten,gv,gr,tg;
	int time;
};
int convert(string a,string b){
	int g1=stoi(a.substr(0,2));
	int p1=stoi(a.substr(3,2));
	int g2=stoi(b.substr(0,2));
	int p2=stoi(b.substr(3,2));
	int p=g2*60+p2-g1*60-p1;
	return p;
}
void nhap(player &a){
	cin>>a.user;
	cin>>a.pass;
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.gv>>a.gr;
	a.time=convert(a.gv,a.gr);
	int g=a.time/60;
	int p=a.time%60;
	string res="";
	
		res=to_string(g)+" gio "+to_string(p)+" phut";
	
	
	a.tg=res;
}
bool cmp(player a,player b){
	if(a.time!=b.time){
		return a.time>b.time;
	}
	return a.user<b.user;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	player a[n];
	for (int i=0;i<n;i++){
		nhap(a[i]);
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		cout<<a[i].user<<" "<<a[i].pass<<" "<<a[i].ten<<" "<<a[i].tg<<endl;
	}
	return 0;
}

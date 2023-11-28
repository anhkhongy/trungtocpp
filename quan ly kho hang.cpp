#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
map<string,int> mp;
struct mh{
	string ma,ten,hang,dv;
	int gn,gb;
};
bool cmp(mh a,mh b){
	if(a.gb-a.gn!=b.gb-b.gn){
		return a.gb-a.gn>b.gb-b.gn;
	}
	return a.ma<b.ma;
}
void nhap(mh a[],int n){
	for (int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].ten);
		stringstream ss(a[i].ten);
		string tmp;
		string res="";
		while(ss>>tmp){
			tmp[0]=toupper(tmp[0]);
			res+=tmp[0];
		}
		mp[res]++;
		string ans="";
		ans+=to_string(mp[res]);
		while(ans.length()<4){
			ans="0"+ans;
		}
		res=res+ans;
		a[i].ma=res;
		getline(cin,a[i].hang);
		getline(cin,a[i].dv);
		cin>>a[i].gn>>a[i].gb;
	}
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	mh a[n];
	nhap(a,n);
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].hang<<" "<<a[i].dv<<" "<<a[i].gn<<" "<<a[i].gb<<endl;
	}
	return 0;
}

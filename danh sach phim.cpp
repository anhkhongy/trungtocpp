#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct phim{
	string ma,ten,ngay,tl;
	int st;
};
bool cmp(phim a,phim b){
	string s1=a.ngay;
	string s2=b.ngay;
	int d1=(s1[0]-'0')*10+s1[1]-'0';int m1=(s1[3]-'0')*10+s1[4]-'0';int y1=stoi(s1.substr(6));
	int d2=(s2[0]-'0')*10+s2[1]-'0';int m2=(s2[3]-'0')*10+s2[4]-'0';int y2=stoi(s2.substr(6));
	if(y1!=y2)return y1<y2;
	if(m1!=m2)return m1<m2;
	if(d1!=d2)return d1<d2;
	if(a.ten!=b.ten)return a.ten<b.ten;
	if(a.st!=b.st)return a.st>b.st;
}

int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	cin.ignore();
	vector<string> v;
	for (int i=0;i<n;i++){
		string s;
		getline(cin,s);
		v.push_back(s);
	}
	phim a[m];
	for (int i=0;i<m;i++){
		string s;
		cin>>s;
		int it=stoi(s.substr(2));
		string res="";
		res+=to_string(i+1);
		while(res.length()<3){
			res="0"+res;
		}
		res="P"+res;
		a[i].ma=res;
		a[i].tl=v[it-1];
		cin>>a[i].ngay;
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].st;
	}
	sort(a,a+m,cmp);
	for (int i=0;i<m;i++){
		cout<<a[i].ma<<" "<<a[i].tl<<" "<<a[i].ngay<<" "<<a[i].ten<<" "<<a[i].st<<endl;
	}
	return 0;
}

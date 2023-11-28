#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct sv{
	string ma,t,l,ns;
	double gpa;
	void in(){
		cout<<ma<<endl;
		cout<<t<<endl;
		cout<<l<<endl;
		cout<<ns<<endl;
		cout<<gpa<<endl;
	}
	void nhap(){
		cin>>ma;
		cin.ignore();
		getline(cin,t);
		cin>>l;
		cin>>ns;
		cin>>gpa;
	}
};
void dssv(sv a[],int n){
	for(int i=0;i<n;i++){
		a[i].in();
	}
}
void search(sv a[],int n){
	string ma;
	cin>>ma;
	bool ok=false;
	for (int i=0;i<n;i++){
		if(a[i].ma.find(ma)!=string::npos){
			a[i].in();
			ok=true;
		}
	}
	if(!ok){
		cout<<"khong tim thay sinh vien nao"<<endl;
	}
}

void svcn(sv a[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		if(a[i].gpa>res){
			res=a[i].gpa;
		}
	}
	for (int i=0;i<n;i++){
		if(a[i].gpa==res){
			a[i].in();
		}
	}
}
bool cmp1(sv a,sv b){
	return a.gpa>b.gpa;
}
void gpa(sv a[],int n){
	vector <sv> v;
	for (int i=0;i<n;i++){
		if(a[i].gpa>2.5){
			v.push_back(a[i]);
		}
	}
	sort(v.begin(),v.end(),cmp1);
	for (sv it:v){
		it.in();
	}
}
string chuanhoa(string s){
	stringstream ss(s);
	vector<string> v;
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	string res="";
	res+=v[v.size()-1];
	for(int i=0;i<v.size()-1;i++){
		res+=v[i];
	}
	return res;
}
bool cmp2(sv a,sv b){
	string ten1=chuanhoa(a.t);
	string ten2=chuanhoa(b.t);
	return ten1<ten2;
}

bool cmp3(sv a,sv b){
	if(a.l!=b.l)return a.l<b.l;
	string ten1=chuanhoa(a.t);
	string ten2=chuanhoa(b.t);
	return ten1<ten2;
}
void sxt(sv a[],int n){
	sort(a,a+n,cmp2);
}
void sxl(sv a[],int n){
	sort(a,a+n,cmp3);
}
int main(int argc, char** argv) {
	sv a[1000];
	int n=0;
	while(1){
		int lc;
		cin>>lc;
		if(lc==1){
			a[n].nhap();
			++n;
		}
		else if(lc==2){
			dssv(a,n);
		}
		else if(lc==3){
			search(a,n);
		}
		else if(lc==4){
			svcn(a,n);
		}
		else if(lc==5){
			gpa(a,n);
		}
		else if(lc==6){
			sxt(a,n);
		}
		else if(lc==0){
			break;
		}
	}
	return 0;
}

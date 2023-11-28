#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SoPhuc{
	private:
		int thuc,ao;
	public:
		friend istream& operator >> (istream& in,SoPhuc &a);
		friend ostream& operator << (ostream& out,SoPhuc a);
		friend SoPhuc operator + (SoPhuc a,SoPhuc b);
		friend bool operator == (SoPhuc a,SoPhuc b);
};
istream& operator >> (istream& in,SoPhuc &a){
	in>>a.thuc;
	in>>a.ao;
	return in;
}
ostream& operator << (ostream& out,SoPhuc a){
	cout<<a.thuc<<" "<<a.ao;
	return out;
}
SoPhuc operator + (SoPhuc a,SoPhuc b){
	SoPhuc tong;
	tong.thuc=a.thuc+b.thuc;
	tong.ao=a.ao+b.ao;
	return tong;
}
bool operator == (SoPhuc a,SoPhuc b){
	if(a.thuc==b.thuc&&a.ao==b.ao)return true;
	return false;
}
int main(int argc, char** argv) {
	SoPhuc a,b;
	cin>>a>>b;
	SoPhuc tong;
	tong=a+b;
	cout<<tong<<endl;
	if(a==b){
		cout<<"Yes";
	}
	else cout<<"no";
	return 0;
}

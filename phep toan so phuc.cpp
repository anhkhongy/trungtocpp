#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SoPhuc{
	double thuc,ao;
};
SoPhuc binh_phuong_tong(SoPhuc a,SoPhuc b){
	SoPhuc tong;
	double x=a.thuc+b.thuc;
	double y=a.ao+b.ao;
	tong.thuc=x*x-y*y;
	tong.ao=2*x*y;
	return tong;
}
void hien_thi(SoPhuc c){
	cout<<c.thuc<<" + "<<c.ao<<"i";
}
int main(){
	int t;
	cin>>t;
	while(t--) {
		SoPhuc A;
		SoPhuc B;
		cin>>A.thuc>>A.ao>>B.thuc>>B.ao;
		SoPhuc C = binh_phuong_tong(A,B);
		hien_thi(C);
		cout<<endl;
	}
}

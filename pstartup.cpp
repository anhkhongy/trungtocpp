#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ytuong{
	int ma,d1,d2;
	double dtb;	
};
bool cmp(ytuong a,ytuong b){
	if(a.dtb!=b.dtb){
		return a.dtb>b.dtb;
	}
	return a.ma<b.ma;
}
int main(int argc, char** argv) {
	int n;
	cin>>n;
	ytuong a[n];
	double b[n];
	for (int i=0;i<n;i++){
		cin>>a[i].ma;
		cin>>a[i].d1>>a[i].d2;
		a[i].dtb=double(a[i].d1)*0.7+double(a[i].d2)*0.3;
		b[i]=a[i].dtb;
	}
	sort(a,a+n,cmp);
	
	for (int i=0;i<7;i++){
		cout<<a[i].ma<<' ';
	}
	cout<<endl;
	return 0;
}

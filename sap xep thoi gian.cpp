#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Time{
	int h,p,s;
};
bool cmp(Time a,Time b){
	if(a.h!=b.h)return a.h<b.h;
	if(a.p!=b.p)return a.p<b.p;
	return a.s<b.s;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	Time a[t];
	for (int i=0;i<t;i++){
		cin>>a[i].h>>a[i].p>>a[i].s;
	}
	sort(a,a+t,cmp);
	for (int i=0;i<t;i++){
		cout<<a[i].h<<" "<<a[i].p<<" "<<a[i].s;
		cout<<endl;
	}
	return 0;
}

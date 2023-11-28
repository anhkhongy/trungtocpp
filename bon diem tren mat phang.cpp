#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct diem{
	int x,y,z;
};
diem ds[5];
void solve(){
	for (int i=1;i<=4;i++){
		cin>>ds[i].x;
		cin>>ds[i].y;
		cin>>ds[i].z;
	}
	int a1=ds[2].x-ds[1].x;
	int a2=ds[2].y-ds[1].y;
	int a3=ds[2].z-ds[1].z;
	int b1=ds[3].x-ds[1].x;
	int b2=ds[3].y-ds[1].y;
	int b3=ds[3].z-ds[1].z;
	int c1=ds[4].x-ds[1].x;
	int c2=ds[4].y-ds[1].y;
	int c3=ds[4].z-ds[1].z;
	int t1=a2*b3-a3*b2;
	int t2=a3*b1-a1*b3;
	int t3=a1*b2-a2*b1;
	int ans=t1*c1+t2*c2+t3*c3;
	if(ans==0){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct diem{
	int x,y;
};
double stg(diem A,diem B,diem C){
	return (0.5*((C.x - A.x) * (B.y -A.y) - (B.x - A.x) * (C.y - A.y)));
}

int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
	
		int n;
		cin>>n;
		diem ds[n];
		for (int i=0;i<n;i++){
			cin>>ds[i].x>>ds[i].y;
		}
		double tong=0;
		for (int i=1;i<n-1;i++){
			tong+=stg(ds[0],ds[i],ds[i+1]);
		}
		cout<<fixed<<setprecision(3)<<abs(tong)<<endl;
	}
	return 0;
}

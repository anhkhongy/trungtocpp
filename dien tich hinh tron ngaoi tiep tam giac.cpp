#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct diem{
	double x,y;
};
double kc(diem a,diem b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		diem a,b,c;
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
		double ab=kc(a,b);
		double ac=kc(a,c);
		double bc=kc(b,c);
		if(ab+bc<=ac||ab+ac<=bc||ac+bc<=ab){
			cout<<"INVALID"<<endl;
		}
		else {
			double p=(ab+ac+bc)/2;
			double s=sqrt(p*(p-ab)*(p-bc)*(p-ac));
			double r=ab*bc*ac/(4*s);
			double S=PI*r*r;
			cout<<fixed<<setprecision(3)<<S<<endl;
		}
	}
	return 0;
}

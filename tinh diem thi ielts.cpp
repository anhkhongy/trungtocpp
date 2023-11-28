#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float diem(int n){
	if(n==1||n==2)return 2.0;
	 if(n==3||n==4)return 2.5;
	 if(n==5||n==6)return 3.0;
	 if(n>=7&&n<=9)return 3.5;
	 if(n>=10&&n<=12)return 4.0;
	 if(n>=13&&n<=15)return 4.5;
	 if(n>=16&&n<=19)return 5.0;
	 if(n>=20&&n<=22)return 5.5;
	 if(n>=23&&n<=26)return 6.0;
	 if(n>=27&&n<=29)return 6.5;
	 if(n>=30&&n<=32)return 7.0;
	
	 if(n==33||n==34)return 7.5;
	 if(n==35||n==36)return 8.0;
	 if(n==37||n==38)return 8.5;
	 if(n==39||n==40)return 9.0;
}
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		float c,d;
		cin>>a>>b;
		cin>>c>>d;
		float e=diem(a);
		float f=diem(b);
		float x=(e+f+c+d)/4;
		float y=x;
		while(y>1)y-=1;
		if(y>=0&&y<0.25)x=x-y;
		else if(y>=0.25&&y<0.75)x=x-y+0.5;
		else x=x-y+1;
		cout<<setprecision(1)<<fixed<<x<<endl;
	
	}
	return 0;
}

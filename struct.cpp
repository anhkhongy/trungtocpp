#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct sophuc{
	int a,b;
	sophuc operator + (const sophuc other){
		sophuc tong;
		tong.a=a+other.a;
		tong.b=b+other.b;
		return tong;//nap chong toan tu
	}
	friend istream& operator >> (istream& in,sophuc &x){//ham in gia tri cua struct
		in>>x.a>>x.b;
		return in;
	}
	friend ostream& operator >>(ostream& out,sophuc x){//ham xuat gai tri cua struct
		out<<x.a<<" "<<x.b;
		return out;
	}
	friend bool operator == (const sophuc x,const sophuc y){
		return x.a==y.a && x.b ==y.b;//toan tu bang
	}
	friend bool operator < (const sophuc x,const sophuc y){
		return x.a<y.a &&x.b<y.b;
	}
};
int main(int argc, char** argv) {
	sophuc a{1,2}, b{3,4};
	sophuc c=a+b;
	cout<<c.a<<" "<<c.b;
	if(a<b){
		cout<<"yes"<<endl;
	}
	else cout<<"no"<<endl;
	return 0;
}

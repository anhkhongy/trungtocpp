#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int x[100];
void init(){
	for (int i=1;i<=n;i++){
		x[i]=0;
	}
}
bool checkFinal(){
	for (int i=1;i<=n;i++){
		if(x[i]==0)return false;
	}
	return true;
}
void genNext(){
	int i=n;
	while(x[i]==1){
		x[i]=0;
		i--;
	}
	x[i]=1;
}
void display(){
	for (int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	cin>>n;
	init();
	while(!checkFinal()){
		display();
		genNext();
	}
	display();
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int x[100];
void init(){
	for (int i=1;i<=n;i++){
		x[i]=i;
	}
}
bool checkFinal(){
	for(int i=n-1;i>=1;i--){
		if(x[i+1]>x[i])return false;
	}
	return true;
}
void genNext(){
	int i=n-1;
	while(i>0&&x[i]>x[i+1]){
		i--;
	}
	for (int j=n;j>=i+1;j--){
		if(x[j]>x[i]){
			swap(x[j],x[i]);
			break;
		}
	}
	reverse(x+i+1,x+n+1);
}
void display(){
	for (int i=1;i<=n;i++){
		cout<<x[i]<<" ";
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

#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int unused[100];
int n;
int x[100];
void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	} 
	cout<<endl;
}
void Try(int i){
	for (int j=1;j<=n;j++){
		if(unused[j]==1){
			x[i]=j;
			unused[j]=0;
			if(i==n){
			display();
			}
			else {
				Try(i+1);
			}
			unused[j]=1;
		}
	}
}
int main(int argc, char** argv) {
	for (int i=1;i<=100;i++){
		unused[i]=1;
	}
	cin>>n;
	Try(1);
	return 0;
}

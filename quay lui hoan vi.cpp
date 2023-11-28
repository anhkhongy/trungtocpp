#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool unused[100];
int x[100],n;
void display(){
	for (int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for (int j=1;j<=n;j++){
		if(unused[j]){
			x[i]=j;
			unused[j]=false;
			if(i==n){
				display();
			}
			else Try(i+1);
			unused[j]=true;
		}
	}
}
int main(int argc, char** argv) {
	cin>>n;
	for (int i=1;i<=n;i++){
		unused[i]=true;
	}
	Try(1);
	return 0;
}

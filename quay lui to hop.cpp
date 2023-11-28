#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x[100]={0};

int n,k;
void display(){
	for (int i=1;i<=k;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for (int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
		display();
		}
		else {
		Try(i+1);
		}
	}
	
}
int main(int argc, char** argv) {
	cin>>n>>k;
	Try(1);
	return 0;
}

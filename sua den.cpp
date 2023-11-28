#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tho[100001]={0};
int main(int argc, char** argv) {
	int n,k,b;
	cin>>n>>k>>b;
	
	int x;
	for (int i=1;i<=b;i++){
		
		cin>>x;
		tho[x]=1;
	}
	int min=0;
	for (int i=1;i<1+k;i++){
		if(tho[i]==1){
			min++;
		}
	}
	
	int tmp=min;
	for (int i=1,j=k+1;j<=n;++i,++j){
		if(tho[i]==1){
			tmp--;
		}
		if(tho[j]==1){
			tmp++;
		}
		if(tmp< min){
			min=tmp;
		}
	}
	cout <<min<<endl;
	return 0;
}

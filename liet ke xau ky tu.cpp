#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k;
int x[12];
int cnt=0;
void Try(int i){
	for (int j=x[i-1];j<=n;j++){
		x[i]=j;
		if(i==k){
			for (int j=1;j<=k;j++){
				cout<<char(x[j]-1+'A');
			}
			cout<<endl;
			cnt++;
		}
		else{
			Try(i+1);
		}
	}
}
int main(int argc, char** argv) {
	x[0]=1;
	char c;
	cin>>c;
	n=c-'A'+1;
	cin>>k;
	Try(1);
	return 0;
}

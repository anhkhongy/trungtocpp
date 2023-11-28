#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x[10]={1,2,5,10,20,50,100,200,500,1000};
int main(int argc, char** argv) {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		while(n>0){
			auto it=lower_bound(x,x+10,n);
			int tmp=it-&x[0];
			int ans;
			if(x[tmp]==n){
				ans=tmp;
			}
			else {
				ans=tmp-1;
			}
			cnt++;
			n-=x[ans];
		}
		cout<<cnt<<endl;
	}
	return 0;
}

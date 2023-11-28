#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m,s;
	cin>>m>>s;
	int tmp=s;
	if(s>9*m||s==0&&m>1)cout<<"-1 -1"<<endl;
	vector<int> a(m),b(m);
	--s;
	for(int i=m-1;i>0;i--){
		if(s!=0){
			if(s>9){
				a[i]=9;s-=9;
			}
			else {
				a[i]=s;s=0;
			}
		}
		else {
			a[i]=0;
			
		}
		a[0]=s+1;
	}
	for (int i=0;i<m;i++){
		if(tmp!=0){
			if(tmp>9){
				b[i]=9;tmp-=9;
			}
			else {
				b[i]=tmp;tmp=0;
			}
		}
		else {
			b[i]=0;
		}
	}
	for (int x:a){
		cout<<x;
	}
	for (int x:b){
		cout<<x;
	}
	return 0;
}

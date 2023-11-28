#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int mi=0,ma=1e9,last;
		int x;
		for (int i=0;i<n;i++){
			cin>>x;
			if(i>0){
				if(last<x)ma=min(ma,(last+x)/2);
				else if(last>x)mi=max(mi,(last+x+1)/2);
			}
			last=x;
		}
		if(mi<=ma)cout<<mi<<endl;
		else {
			cout<<"-1"<<endl;
		}
	}
}

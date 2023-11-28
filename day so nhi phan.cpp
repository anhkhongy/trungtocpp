#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a1[n],a2[n];
		for (int i=0;i<n;i++){
			cin>>a1[i];
			
		}
		for (int i=0;i<n;i++){
			cin>>a2[i];
		}
		int max=1,k=0;
		for (int i=0;i<n;i++){
			int x=0,y=0;
			for (int j=i;j<n;j++){
				x+=a1[j];
				y+=a2[j];
				if(x==y){
					k=j-i+1;
				}
			}
			if(k>max)max=k;
		}
		cout<<max<<endl;
	}
	return 0;
}

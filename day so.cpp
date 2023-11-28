#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int tong;
	for (int i=1;i<=a[0];i++){
		tong=0;
		int tmp=a[0]/i;
		tong+=i;
		bool ok=true;
		for (int j=1;j<n;j++){
			int ans=a[j]/(tmp+1);
			ans+=1;
			if(a[j]/ans==tmp){
				tong+=ans;
			}
			else {
				ok=false;
				break;
			}
		}
		if(ok){
			cout<<tong;
			break;
		}
	}
	return 0;
}

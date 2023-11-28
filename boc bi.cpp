#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,k;
	cin>>a>>b>>c>>k;
	int arr[3]={a,b,c};
	sort(arr,arr+3);
	int ans=0;
	for (int i=0;i<3;i++){
		ans+=min(arr[i],k-1);
	}
	cout<<ans+1<<endl;
	return 0;
}

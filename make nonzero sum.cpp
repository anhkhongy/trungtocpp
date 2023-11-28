#include<bits/stdc++.h>
using namespace std;using ll=long long;const int N=2e5+10;
int T,n,m,a[N],b[N];
void get(){
	cin>>n;for(int i=1;i<=n;i++)cin>>a[i];if(n&1){puts("-1");return;}m=0;
	for(int i=1;i<=n;i+=2)if(a[i]==a[i+1])m++;else m+=2;cout<<m<<endl;
	for(int i=1;i<=n;i+=2)if(a[i]==a[i+1])cout<<i<<' '<<i+1<<endl;else cout<<i<<' '<<i<<endl<<i+1<<' '<<i+1<<endl;
}
int main(){
	for(cin>>T;T--;)get();return 0;
}

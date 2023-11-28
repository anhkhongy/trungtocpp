#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,p,s,t,a[105];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n>>m;
		for(i=p=s=0;i<n*m;i++)
		{
			cin>>a[i];
			if(a[i]<0)p++;
			s+=a[i]=abs(a[i]);
		}
		sort(a,a+n*m);
		cout<<s-p%2*2*a[0]<<endl;
	}//xet tu cuoi ve dau tat ca phan tu a[i] voi i#0 se duong con a[0]phu thuoc vao p
}

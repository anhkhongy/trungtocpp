#include<bits/stdc++.h>
using namespace std;
int main()
{int i,j,k,t,n,l;
int a[2500],b[2501];
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&n);
j=0;
for(k=0;k<=n*n/2;k++){
a[j++]=n*n-k;
a[j++]=k+1;
}
for(j=0;j<n;j++){
if(j%2==0)
for(k=j*n;k<j*n+n;k++)
printf("%d ",a[k]);
else
for(k=j*n+n-1;k>=j*n;k--)
printf("%d ",a[k]);
printf("\n");
}
}
return 0;
}

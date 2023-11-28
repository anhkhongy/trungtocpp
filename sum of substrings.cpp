#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int a,x,t,cnt,res;
int pos[maxn];
char s[maxn];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%s",&x,&a,s+1),cnt=0;
        for(int i=1;i<=x;i++) if(s[i]=='1') pos[++cnt]=i;
        res=11*cnt;
        if(cnt&&a>=x-pos[cnt]) a-=x-pos[cnt--],res-=10;
        if(cnt&&a>=pos[1]-1) res--;
        printf("%d\n",res);
    }
    return 0;
}

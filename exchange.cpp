#include <cstdio>
int t,n,a,b;
void once()
{
    scanf("%d%d%d",&n,&a,&b);
    printf("%d\n",a>b?1:(n+a-1)/a);
}
int main()
{
    for(scanf("%d",&t);t--;) once();
}

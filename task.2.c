/* final velocity*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long t,v,u,s,a;
    scanf("%d%d%d",&t,&u,&a);
    v=u+a*t;
    printf("%d\n",v);
   s=u*t+0.5*a*t*t;
    printf("%d\n",s);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long odd_product=1,even_sum=0;
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2==0){
        even_sum+=i;
        printf("%d\n",even_sum);
    }
else
    odd_product*=i;
 printf("%d\n",odd_product);
}

    return 0;
}

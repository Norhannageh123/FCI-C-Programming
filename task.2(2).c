/*Body Mass index calculator*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 float weight,height,Bmi;
 scanf("%f%f",&weight,&height);
 Bmi=weight/height*height;
 printf("%f",Bmi);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=0,d1,d2,d3,d4,d5;
    scanf("%d",&a);
    d1=a%10;
    if(d1==7){
        i++;}
        a/=10;
     d2=a%10;
     if(d2==7){
        i++;}
        a/=10;
     d3=a%10;
     if(d3==7){
        i++;}
        a/=10;
     d4=a%10;
     if(d4==7){
        i++;}
        a/=10;
     d5=a%10;
     if(d5==7){
        i++;}
    printf("%d",i);
    return 0;
}

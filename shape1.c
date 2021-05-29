#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for ( int i = 1 ; i <=n ; i++){
            for(int m=1;m<=n-1;m++){
                printf(" ");
            }
            for(int j=1;j<=i*2-1;j++){
                printf("*");
            }
            printf("\n");
    }
            for(int k=n;k>=1;k--){
                for(int m=1;m<=n-k;m++){
                    printf(" ");
                }
                for(int j=1;j<=k*2-1;j++){
                        printf("*");
                }
                printf("\n");
            }

    return 0;
}


#include <stdio.h>

int main (void)
{
    int i,n,anser;

    anser=1;

    printf("n=\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        anser=anser*i;
        printf("%d!",i);
        printf("%6d\n",anser);

    }

    return 0;
}







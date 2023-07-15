#include <stdio.h>
int main (void)

{
    int num,i,ans,ans2;

    printf("How many numbers are dusplayedH\n");
    scanf("%d",num);

    ans=0;
    ans2=1;

    for ( i = 0; i <=num; i++)
    {
        

        for ( i = 1; i <= num; i++)
        {
            ans=ans2+ans;
            printf("%d\n",ans);
        }
        
    }
    


    return 0;
}
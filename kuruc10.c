#include <stdio.h>
int main (void)
{
    //hogehuga

    int num, i;

    printf("How many numbers are dusplayed�H\n");
    scanf("%d",&num);

    for ( i = 0; i <= num; i++)
    {
        if (i%15==0)
        {
            printf("hogehuga\n");
        }
        
        else if (i%3==0)
        {
            printf("hoge\n");
        }
        
        else if (i%5==0)
        {
            printf("fuga\n");
        }

        else
        {
            printf("%d\n",i);
        }

        
        
    }
    
    


    return 0;
}
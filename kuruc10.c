#include <stdio.h>

int main(void)
{
    int answer, n, i;

        printf("’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢n=?\n");

        scanf("%d",&n);

        answer=1;


        for(i=1;i<=n;i++)
        
        {


             answer=i*answer;

             printf("%d!",i);

            printf("%5d\n",answer);
        
        }

        return 0;

}
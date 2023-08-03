#include <stdio.h>
#include <stdlib.h>

int GetRandom(int min, int max);

//big or small

int main (void)

{
    int num,num1,num2;

    num2=0;

    num1=GetRandom(1,500);

    printf("%d\n",num1);

    do
    {
        printf("”‚ð“ü—Í\n");
        scanf("%d",&num);
        if (num1>num)
        {
            printf("‚»‚ê‚æ‚è‘å‚«‚¢\n");
        }
         if (num1<num)
        {
            printf("‚»‚ê‚æ‚è¬‚³‚¢\n");
        }
        
        num2++;
        
    } while (num1!=num);

    
    printf("%d‰ñ–Ú‚Å³‰ð\n",num2);


    
    return 0;
}

int GetRandom(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
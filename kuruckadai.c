#include <stdio.h>
int main (void)

//素数
{

int num,i;

printf("判定したい数字\n");
scanf("%d",&num);

    for ( i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            printf("素数じゃない\n");

            return 0;
    
        }
        
             
    }
        
            printf("素数だ\n");
        

    return 0;

}   
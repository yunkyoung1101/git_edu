#include <stdio.h>
int main (void)

//素因数分解
{

    int num,i;

    printf("素因数分解したい数字\n");
    scanf("%d",&num);

  for ( i = 2; i <= num; i++)
  {
    while (num%i==0)
    {
        num=num/i;
        printf("%d\n",i);
    }
    
  }
  
    

    return 0;
}
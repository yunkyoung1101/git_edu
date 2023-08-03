#include <stdio.h>
int main (void)

//‘fˆö”•ª‰ğ
{

    int num,i;

    printf("‘fˆö”•ª‰ğ‚µ‚½‚¢”š\n");
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
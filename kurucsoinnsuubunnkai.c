#include <stdio.h>
int main (void)

//�f��������
{

    int num,i;

    printf("�f������������������\n");
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
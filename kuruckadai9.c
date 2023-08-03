#include <stdio.h>
int main(void)
//x•¥‚¢
{
    int num,num1,num2,num3,num4;

    printf("‚¢‚­‚çH\n");
    scanf("%d",&num);

    if (num>=100)
    {
        num1=num/100;
        num3=num%10;
        num2=((num-((100*num1)+num3))/10);
        
    }
    
    
    printf("100‰~:%d–‡\n",num1);
    printf("10‰~:%d–‡\n",num2);
    printf("1‰~:%d–‡\n",num3);
    
    return 0;
}
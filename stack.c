#include <stdio.h>

int i,num,num1,num3=0,n;
int stack[10000];
int stackqueue(void);

int stackqueue(void)
{
    switch (num)
    {
    case 1:

     for (i = 0; i < num3; i++) {
        printf("%d\n",stack[i]);
    }
        break;

     case 2:

     for (i = num3-1; 0 <= i; i--) {
        printf("%d\n",stack[i]);
    }
        break;
    
    default:
        break;
    }



    return 0;
}


int main(void)
{

    printf("スタック:1\nキュー:2\n");
    scanf("%d",&num);

     printf("数入力してください:\n");
    for (i = 0; i < 10000; i++) {
        printf("要素%d:", i+1);
        scanf("%d", &stack[i]);
        
        if (stack[i]==-1)
        {
            break;
        }
        num3++;
    }

    stackqueue();
    

   
    return 0;
}


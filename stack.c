#include <stdio.h>

int i,num,n,num1,num3,num4,num5,n,count=0,popnum,ennum,denum,j=0;
int stack[10000];
int stackqueue(void);
int pushpop(void);
int pushpop2(void);
int enqueuedequeue(void);

int stackqueue(void)
{
    switch (num)
    {
    case 1://スタック

          for (i = count-1; 0 <= i; i--) {
        printf("%d\n",stack[i]);
    }
        pushpop();
        break;

     case 2://キュー

    for (i = 0; i < count; i++) {
        printf("%d\n",stack[i]);
    }
     enqueuedequeue();
   
    break;
    
    default:
        break;
    }



    return 0;
}

int pushpop(void)
{
    printf("push:1  pop:2 おわる:3 size:4  peek:5      ");
    scanf("%d",&num4);

    switch (num4)
    {
    case 1:  //push
    for (i = count; i < 10000; i++) {
       
        scanf("%d", &stack[i]);
        
        if (stack[i]==-1)
        {
            break;
        }
        count++;
    }
    
     for (i = count-1; 0 <= i; i--) {
        printf("%d\n",stack[i]);
    }
        return pushpop();

    case 2://pop
    for (j = 2; j <= count; j++) {
        printf("%d\n",stack[count-j]);
    }
    count=count-1;
    
     if (count<=0)
       {
        printf("要素がありませんpushしてください\n");
       }
       
     return pushpop();

    case 3:

    break;

    case 4:
    printf("要素の数は%d\n",count);
    return pushpop();
    
    case 5:
    if (count>1)
    {
       printf("%d\n",stack[0]);
    }
    else{
        printf("要素がありません\n");
    }
    
    return pushpop();

    default:
        break;
}
    return 0;

}
int enqueuedequeue(void)
{
     printf("enqueue:1  dequeue:2  おわる:3  size:4  peek:5       ");
    scanf("%d",&ennum);
    switch (ennum)
    {
    case 1: //enqueue
         for (i = count; i < n; i++) {
       
        scanf("%d", &stack[i]);
        
        if (stack[i]==-1)
        {
            break;
        }
        count++;
    }
     for (i = 0; i < count; i++) {
        printf("%d\n",stack[i]);
    }
        return enqueuedequeue();

    case 2: //dequeue
        for (j = 0; j < count-1; j++) {
        printf("%d\n",stack[j+1]);
        stack[j]=stack[j+1];
        
        }

        if (count<=1)
        {
            printf("要素がありませんenqueueしてください\n");
        }
        
        count=count-1;
      return enqueuedequeue();

    case 3:
    break;

    case 4:
    printf("要素の数は%d\n",count);
     return enqueuedequeue();

    case 5:
    if (stack[count-1]>0)
    {
        printf("%d\n",stack[0]);
    }

    else{
        printf("要素がありません\n");
    }
    
    
     return enqueuedequeue();


    default:
        break;
    }



    return 0;
}

int main(void)
{
    printf("スタック:1\nキュー:2\n");
    scanf("%d",&num);

    printf("要素の数は？\n");
    scanf("%d",&n);
     printf("数入力してください:\n");
    for (i = 0; i < n; i++) {
        printf("要素%d:", i);
        scanf("%d", &stack[i]);
        
        if (i>n)
        {
            break;
        }
        
        if (stack[i]==-1)
        {
            break;
        }
        count++;
    }

    stackqueue();
    
   
    return 0;
}


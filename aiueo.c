#include <stdio.h>
int main (void)

//年利

{
    int year=0,fir,max,per,money;

    printf("年利を教えて(パーセント)\n");
    scanf("%d",&per);

    printf("初期値、上限値をおしえて\n");
    scanf("%d,%d",&fir,&max);

    money=fir;

    while (money<=max)
    {


        year++;

        money=(money+(fir*per*0.01));


    }

        printf("かかった年:%d\n",year);
    

    return 0;
}
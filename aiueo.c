#include <stdio.h>
int main (void)

//�N��

{
    int year=0,fir,max,per,money;

    printf("�N����������(�p�[�Z���g)\n");
    scanf("%d",&per);

    printf("�����l�A����l����������\n");
    scanf("%d,%d",&fir,&max);

    money=fir;

    while (money<=max)
    {


        year++;

        money=(money+(fir*per*0.01));


    }

        printf("���������N:%d\n",year);
    

    return 0;
}
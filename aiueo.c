#include <stdio.h>

int main (void)
{
    int money, mark,goukei;

    money=5000;
    printf("�_��������");
    scanf("%d",&mark);

    if(mark>=80){
        goukei=money+2000;
        printf("���ق��т���\n");
    }else{
        goukei=money-1000;
        printf("���͊撣���Ă�\n");
    }

    printf("�����̂����Â�����%d�~�ł�\n",goukei);


    return 0;

}





    

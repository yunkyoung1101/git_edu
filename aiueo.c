#include <stdio.h>

int main (void)
{
    int money, mark,goukei;

    money=5000;
    printf("点数を入れて");
    scanf("%d",&mark);

    if(mark>=80){
        goukei=money+2000;
        printf("ごほうびだよ\n");
    }else{
        goukei=money-1000;
        printf("次は頑張ってね\n");
    }

    printf("今げつのおこづかいは%d円です\n",goukei);


    return 0;

}





    

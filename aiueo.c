#include <stdio.h>

int main (void)
{
    int money, mark,goukei;

    money=5000;
    printf("“_”‚ğ“ü‚ê‚Ä");
    scanf("%d",&mark);

    if(mark>=80){
        goukei=money+2000;
        printf("‚²‚Ù‚¤‚Ñ‚¾‚æ\n");
    }else{
        goukei=money-1000;
        printf("Ÿ‚ÍŠæ’£‚Á‚Ä‚Ë\n");
    }

    printf("¡‚°‚Â‚Ì‚¨‚±‚Ã‚©‚¢‚Í%d‰~‚Å‚·\n",goukei);


    return 0;

}





    

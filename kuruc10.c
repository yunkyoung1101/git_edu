#include <stdio.h>
int main (void)

{
    int j_score ,so_score,si_score,score;

    do{
        printf("国語の点数\n");
        scanf("%d",&j_score);

        printf("社会の点数\n");
        scanf("%d",&so_score);

        printf("理科の点数\n");
        scanf("%d",&si_score);

    }while(j_score>100||j_score<0||so_score>100||
            so_score<0||si_score<0||si_score>100);

    score=((j_score+so_score+si_score)/3);
    printf("平均点は%d点です\n",score);


        if(ennzannshi="+"){

            ( answer=suuti_1+suuti_2);

        }

        if(ennzannshi="-"){

            (answer=suuti_1-suuti_2);

        }

        if(ennzannshi="*"){

                (answer=suuti_1*suuti_2);

        }

        if(ennzannshi="/"){

                (answer=suuti_1/suuti_2);

        }

        else {

               ( answer=suuti_1%suuti_2);

        }

    return 0;
}
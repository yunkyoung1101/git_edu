#include <stdio.h>
int main (void)

{
    int j_score ,so_score,si_score,score;

    do{
        printf("����̓_��\n");
        scanf("%d",&j_score);

        printf("�Љ�̓_��\n");
        scanf("%d",&so_score);

        printf("���Ȃ̓_��\n");
        scanf("%d",&si_score);

    }while(j_score>100||j_score<0||so_score>100||
            so_score<0||si_score<0||si_score>100);

    score=((j_score+so_score+si_score)/3);
    printf("���ϓ_��%d�_�ł�\n",score);


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
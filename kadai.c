#include <stdio.h>
int main (void)

//�d��

{
    int suuti_1,suuti_2;
    char ennzannshi;
    char op;//

    printf("���l����͂��Ă�������\n");
    scanf("%d",&suuti_1);

    printf("���l����͂��Ă��������Q\n");
    scanf("%d",&suuti_2);

    printf("���Z�q����͂��Ă�������\n");
    scanf(" %c",&ennzannshi);


        
        if(ennzannshi='+'){

           printf ("%d", suuti_1+suuti_2);

        }

         else if(ennzannshi='-'){

             printf ("%d", suuti_1-suuti_2);


        }

         else  if(ennzannshi='*'){

                 printf ("%d", suuti_1*suuti_2);

        }

        else if(ennzannshi='/'){

                 printf ("%d", suuti_1/suuti_2);


        }

        else {

             printf ("%d", suuti_1%suuti_2);


        }

    
    return 0;
}




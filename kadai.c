#include <stdio.h>
int main (void)

//電卓

{
    int suuti_1,suuti_2;
    char ennzannshi;
    char op;//

    printf("数値を入力してください\n");
    scanf("%d",&suuti_1);

    printf("数値を入力してください２\n");
    scanf("%d",&suuti_2);

    printf("演算子を入力してください\n");
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




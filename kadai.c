#include <stdio.h>
#include <math.h>
int main (void)

//�d��

{
    int suuti_1,suuti_2,ans,i;
    char enn;
    char op;//

    printf("���l����͂��Ă�������\n");
    scanf("%d",&suuti_1);

    printf("���l����͂��Ă��������Q\n");
    scanf("%d",&suuti_2);

    printf("���Z�q����͂��Ă�������\n");
    scanf(" %c",&enn);


        
        if( enn == '+' ){

           printf ("%d", suuti_1 + suuti_2);

        }

         else if( enn== '-' ){

             printf ("%d", suuti_1 - suuti_2);


        }

         else  if( enn== '*' ){

                 printf ("%d", suuti_1*suuti_2);

        }

        else if( enn== '/' ){

                 printf ("%d", suuti_1/suuti_2);


        }
        else if(enn== '%'){

            printf("%d",suuti_1%suuti_2);
        }

       

        else if ( enn== '^'){

            ans=1;

            for ( i = 1; i<=suuti_2; i++)
            {
            
                ans=ans*suuti_1;
            }
            

             printf("%d",ans);
        }

        else {

            printf("������x�����Ă�������\n");
        }

    
    return 0;
}




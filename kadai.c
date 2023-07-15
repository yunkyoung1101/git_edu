#include <stdio.h>
#include <math.h>
int main (void)

//電卓

{
    int suuti_1,suuti_2,ans,i;
    char enn;
    char op;//

    printf("数値を入力してください\n");
    scanf("%d",&suuti_1);

    printf("数値を入力してください２\n");
    scanf("%d",&suuti_2);

    printf("演算子を入力してください\n");
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

            printf("もう一度試してください\n");
        }

    
    return 0;
}




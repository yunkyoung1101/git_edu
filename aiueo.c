#include <stdio.h>
int main (void)

{
    int i,answer;
    answer=0;

    for (i=1;i<=10;i++){

        answer=i+answer;
        printf("%3d¨%3d\n",i,answer);


    }



    return 0;
}
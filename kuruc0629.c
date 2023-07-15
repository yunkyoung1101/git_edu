#include <stdio.h>
int main (void)

{
  double eva1,eva2,eva3,score1,score2,score3,sum1,sum2,sum3,  sta1,sta2,sta3,sta,sta4,sta5,sta6;

  printf("課題、中間、定期の評価割合おしえて\n");
  scanf("%lf,%lf,%lf",&eva1, &eva2, &eva3);

  printf("それぞれの満点の点数おしえて\n");
  scanf("%lf,%lf,%lf", &score1,&score2,&score3);

  printf("それぞれの獲得した点数おしえて\n");
  scanf("%lf,%lf,%lf",&sum1,&sum2,&sum3);

  printf("A,B,C,Fの基準値おしえて\n");
  scanf("%lf,%lf,%lf",&sta1,&sta2,&sta3);

  sta=(eva1*(sum1/score1))+(eva2*(sum2/score2))+(eva3*(sum3/score3));

   


     if (sta>=sta1)
    {
       printf("単位:A\n");
     }
    else if (sta>=sta2)
    {
       printf("単位:B\n");
     }
    else if (sta>=sta3)
     {
        printf("単位:C\n");
     }
    else {
        printf("単位:F\n");
     }
     
  return 0;
}

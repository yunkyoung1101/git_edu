#include <stdio.h>
int main (void)

{
  double eva1,eva2,eva3,score1,score2,score3,sum1,sum2,sum3,  sta1,sta2,sta3,sta,sta4,sta5,sta6;

  printf("�ۑ�A���ԁA����̕]��������������\n");
  scanf("%lf,%lf,%lf",&eva1, &eva2, &eva3);

  printf("���ꂼ��̖��_�̓_����������\n");
  scanf("%lf,%lf,%lf", &score1,&score2,&score3);

  printf("���ꂼ��̊l�������_����������\n");
  scanf("%lf,%lf,%lf",&sum1,&sum2,&sum3);

  printf("A,B,C,F�̊�l��������\n");
  scanf("%lf,%lf,%lf",&sta1,&sta2,&sta3);

  sta=(eva1*(sum1/score1))+(eva2*(sum2/score2))+(eva3*(sum3/score3));

   


     if (sta>=sta1)
    {
       printf("�P��:A\n");
     }
    else if (sta>=sta2)
    {
       printf("�P��:B\n");
     }
    else if (sta>=sta3)
     {
        printf("�P��:C\n");
     }
    else {
        printf("�P��:F\n");
     }
     
  return 0;
}

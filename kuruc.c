#include <stdio.h>
int main (void)

//4�ʐς����߂�֐�

{   
    int sha;
    double num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
    printf("�}�`�̎�ނ�������\n�O�p�`:1\n �����`:2\n ��`:3\n ���s�l�ӌ`:4\n  �~:5\n ��`:6\n ");
    scanf("%d",&sha);

    switch (sha)
    {
    case 1://�O�p�`
            printf("��ӁA������������\n");
            scanf("%lf,%lf",&num1,&num2);
            printf("�ʐς�%f�ł�\n", ((num1 * num2) / 2)  );

        break;
    
    case 2://�����`
            printf("�c�A����������\n");
            scanf("%lf,%lf",&num3,&num4);
            printf("�ʐς�%f�ł�\n",(num3*num4));
            break;

    case 3://��`
            printf("���A����A��������������\n");
            scanf("%lf,%lf,%lf",&num5,&num6,&num7);
            printf("�ʐς�%f�ł�",((num5+num6)*num7/2));
            break;

    case 4://���s�l�ӌ`
            printf("��ӁA������������\n");
            scanf("%lf,%lf",&num8,&num9);
            printf("�ʐς�%f�ł�\n",(num8*num9));
            break;
        

    case 5://�~
            printf("���a��������\n");
            scanf("%lf",&num10);
            printf("�ʐς�%f�ł�\n",(num10*num10*3.14));
            break;

    case 6://��`
                printf("���a�A���S�p��������\n");
                scanf("%lf,%lf",&num11,&num12);
                printf("�ʐς�%f�ł�\n",((num11*num11*3)*(num12/360)));
                break;



    default:
                printf("������񂽂߂���\n");
    }
    

    return 0;
}




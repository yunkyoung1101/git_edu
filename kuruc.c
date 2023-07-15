#include <stdio.h>
int main (void)

//4面積を求める関数

{   
    int sha;
    double num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
    printf("図形の種類おしえて\n三角形:1\n 長方形:2\n 台形:3\n 平行四辺形:4\n  円:5\n 扇形:6\n ");
    scanf("%d",&sha);

    switch (sha)
    {
    case 1://三角形
            printf("底辺、高さおしえて\n");
            scanf("%lf,%lf",&num1,&num2);
            printf("面積は%fです\n", ((num1 * num2) / 2)  );

        break;
    
    case 2://長方形
            printf("縦、横おしえて\n");
            scanf("%lf,%lf",&num3,&num4);
            printf("面積は%fです\n",(num3*num4));
            break;

    case 3://台形
            printf("上底、下底、高さをおしえて\n");
            scanf("%lf,%lf,%lf",&num5,&num6,&num7);
            printf("面積は%fです",((num5+num6)*num7/2));
            break;

    case 4://平行四辺形
            printf("底辺、高さおしえて\n");
            scanf("%lf,%lf",&num8,&num9);
            printf("面積は%fです\n",(num8*num9));
            break;
        

    case 5://円
            printf("半径おしえて\n");
            scanf("%lf",&num10);
            printf("面積は%fです\n",(num10*num10*3.14));
            break;

    case 6://扇形
                printf("半径、中心角おしえて\n");
                scanf("%lf,%lf",&num11,&num12);
                printf("面積は%fです\n",((num11*num11*3)*(num12/360)));
                break;



    default:
                printf("もう一回ためして\n");
    }
    

    return 0;
}




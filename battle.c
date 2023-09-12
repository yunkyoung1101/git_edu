#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include <time.h>
 char str[32],str1[32];
 int playhp,playhp1,attack,attack1,check,count,revenge,weapon,num;
 int information(void);
 int battle(void);
 int battle2(void);
 int battle3(void);
 int result(void);
 int GetRandom(int min, int max);
  


 int GetRandom(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

int information()
{

    
    {
        
        printf("プレイヤーの名前を入力\n");
        scanf("%s",&str);

    printf("敵の名前を入力\n");
        scanf("%s",&str1);

   
    printf("プレイヤーのHP(1~500)を入力\n");
    scanf("%d",&playhp);

    printf("敵のHP(1~500)を入力\n");
    scanf("%d",&playhp1);

   
    printf("%s  :  HP%d    攻撃力　ランダム\n\n\n\n",str,playhp);

    printf("%s  :  HP%d    攻撃力　ランダム\n\n",str1,playhp1);

    printf("スタート：１　　再入力：２\n");
    scanf("%d",&check);
    } while (check!=1);
    return 0;
}

int battle()
{
     srand((unsigned int)time(NULL));
    while (0<playhp && 0<playhp1)
    {
    
        printf("%sの攻撃\n",str);
        playhp1=playhp1-GetRandom(20,70);
        printf("%sのHP残り%d\n%sのHP残り%d\n\n\n",str1,playhp1,str,playhp);

        if (playhp1<0)
        {
            printf("おめでとうwin\n");
            return 0;
        }
        sleep(3);
         printf("%sの攻撃\n",str1);
        playhp=playhp-GetRandom(20,70);
        printf("%sのHP残り%d\n%sのHP残り%d\n\n\n",str,playhp,str1,playhp1);
        sleep(3);
        count++;
    }

    if (playhp1>playhp)
    {
        return 1;
    }

    return 0;
}
int battle2()
{
    playhp=100;
    playhp1=100;
     printf("%s  :  HP%d    攻撃力　ランダム\n\n\n\n",str,playhp);

     printf("%s  :  HP%d    攻撃力　ランダム\n\nゲームをはじめます\n\n\n\n",str1,playhp1);

    printf("道に武器がおちている!  どちらを選択する？\n1  剣:攻撃力+50 UP\n2  盾: HP+50\n3  拾わない\n\n\n");
    scanf("%d",&weapon);
    switch (weapon)
    {
    case 1:
        printf("剣を手に入れた！\n");
        printf("バトルをはじめる？ スタート:1   やめる:2   \n");
        scanf("%d",&num);
        if (num==2)
        {
            return 0;
        }
        return battle();
    
    case 2:
        printf("盾を手に入れた！HPが150になった！\n");
        printf("バトルをはじめる？ スタート:1   やめる:2   \n");
        scanf("%d",&num);
        if (num==2)
        {
            return 0;
        }
        playhp=playhp+50;
        return battle3();

    case 3:
        printf("武器を拾わなかった...\n仲間がやってきたぞ攻撃力とHPが+50された\n");
        printf("バトルをはじめる？ スタート:1   やめる:2   \n");
        scanf("%d",&num);
        if (num==2)
        {
            return 0;
        }
        
        playhp=playhp+50;
        return battle3();
    default:
        break;
    }
    return 0;
}
int battle3()
{
    while (0<playhp && 0<playhp1)
    {
        printf("%sの攻撃\n",str);
        playhp1=playhp1-(GetRandom(20,70)+50);
        printf("%sのHP残り%d\n%sのHP残り%d\n\n\n",str1,playhp1,str,playhp);

        if (playhp1 < 0)
        {
            return result();
        }
        

         printf("%sの攻撃\n",str1);
        playhp=playhp-GetRandom(20,70);
        printf("%sのHP残り%d\n%sのHP残り%d\n\n\n",str,playhp,str1,playhp1);

        count++;
    }

    if (playhp1>playhp)
    {
        return 1;
    }

    if (playhp>playhp1)
    {
        return 2;
    }
    switch (battle3())
    {
    case 1:
        printf("%dターン目で%sの勝利\n",count,str1);

        printf("リベンジする？ yes:1  no:2  \n");
        scanf("%d",&revenge);
        count=1;
        if (revenge==1)
        {
            return battle2();
        }
        
        break;
    
     case 2:
        printf("%dターン目で%sの勝利\n",count,str);
         printf("リベンジする？ yes:1  no:2  \n");
         count=1;
        scanf("%d",&revenge);
        if (revenge==1)
        {
            return battle2();
        }
        break;

    default:
    return 0;
}
}
int result()
{
        printf("%dターン目で%sの勝利\n",count,str);
        printf("おめでとうwin\n");
        return 0;
}
int main ()
{
    information();
      printf("%sからスタートです\n",str);
    battle();
    switch (battle())
    {
    case 1:
        printf("%dターン目で%sの勝利\n",count,str1);

        printf("リベンジする？ yes:1  no:2  \n");
        scanf("%d",&revenge);
        count=1;
        if (revenge==1)
        {
            return battle2();
        }
        
        break;
    
     case 2:
        printf("%dターン目でまけ\n",count);
         printf("リベンジする？ yes:1  no:2  \n");
         count=1;
        scanf("%d",&revenge);
        if (revenge==1)
        {
            return battle2();
        }
        break;

    default:
        break;
    }
    
   return 0;
}
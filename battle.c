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
        
        printf("�v���C���[�̖��O�����\n");
        scanf("%s",&str);

    printf("�G�̖��O�����\n");
        scanf("%s",&str1);

   
    printf("�v���C���[��HP(1~500)�����\n");
    scanf("%d",&playhp);

    printf("�G��HP(1~500)�����\n");
    scanf("%d",&playhp1);

   
    printf("%s  :  HP%d    �U���́@�����_��\n\n\n\n",str,playhp);

    printf("%s  :  HP%d    �U���́@�����_��\n\n",str1,playhp1);

    printf("�X�^�[�g�F�P�@�@�ē��́F�Q\n");
    scanf("%d",&check);
    } while (check!=1);
    return 0;
}

int battle()
{
     srand((unsigned int)time(NULL));
    while (0<playhp && 0<playhp1)
    {
    
        printf("%s�̍U��\n",str);
        playhp1=playhp1-GetRandom(20,70);
        printf("%s��HP�c��%d\n%s��HP�c��%d\n\n\n",str1,playhp1,str,playhp);

        if (playhp1<0)
        {
            printf("���߂łƂ�win\n");
            return 0;
        }
        sleep(3);
         printf("%s�̍U��\n",str1);
        playhp=playhp-GetRandom(20,70);
        printf("%s��HP�c��%d\n%s��HP�c��%d\n\n\n",str,playhp,str1,playhp1);
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
     printf("%s  :  HP%d    �U���́@�����_��\n\n\n\n",str,playhp);

     printf("%s  :  HP%d    �U���́@�����_��\n\n�Q�[�����͂��߂܂�\n\n\n\n",str1,playhp1);

    printf("���ɕ��킪�����Ă���!  �ǂ����I������H\n1  ��:�U����+50 UP\n2  ��: HP+50\n3  �E��Ȃ�\n\n\n");
    scanf("%d",&weapon);
    switch (weapon)
    {
    case 1:
        printf("������ɓ��ꂽ�I\n");
        printf("�o�g�����͂��߂�H �X�^�[�g:1   ��߂�:2   \n");
        scanf("%d",&num);
        if (num==2)
        {
            return 0;
        }
        return battle();
    
    case 2:
        printf("������ɓ��ꂽ�IHP��150�ɂȂ����I\n");
        printf("�o�g�����͂��߂�H �X�^�[�g:1   ��߂�:2   \n");
        scanf("%d",&num);
        if (num==2)
        {
            return 0;
        }
        playhp=playhp+50;
        return battle3();

    case 3:
        printf("������E��Ȃ�����...\n���Ԃ�����Ă������U���͂�HP��+50���ꂽ\n");
        printf("�o�g�����͂��߂�H �X�^�[�g:1   ��߂�:2   \n");
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
        printf("%s�̍U��\n",str);
        playhp1=playhp1-(GetRandom(20,70)+50);
        printf("%s��HP�c��%d\n%s��HP�c��%d\n\n\n",str1,playhp1,str,playhp);

        if (playhp1 < 0)
        {
            return result();
        }
        

         printf("%s�̍U��\n",str1);
        playhp=playhp-GetRandom(20,70);
        printf("%s��HP�c��%d\n%s��HP�c��%d\n\n\n",str,playhp,str1,playhp1);

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
        printf("%d�^�[���ڂ�%s�̏���\n",count,str1);

        printf("���x���W����H yes:1  no:2  \n");
        scanf("%d",&revenge);
        count=1;
        if (revenge==1)
        {
            return battle2();
        }
        
        break;
    
     case 2:
        printf("%d�^�[���ڂ�%s�̏���\n",count,str);
         printf("���x���W����H yes:1  no:2  \n");
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
        printf("%d�^�[���ڂ�%s�̏���\n",count,str);
        printf("���߂łƂ�win\n");
        return 0;
}
int main ()
{
    information();
      printf("%s����X�^�[�g�ł�\n",str);
    battle();
    switch (battle())
    {
    case 1:
        printf("%d�^�[���ڂ�%s�̏���\n",count,str1);

        printf("���x���W����H yes:1  no:2  \n");
        scanf("%d",&revenge);
        count=1;
        if (revenge==1)
        {
            return battle2();
        }
        
        break;
    
     case 2:
        printf("%d�^�[���ڂł܂�\n",count);
         printf("���x���W����H yes:1  no:2  \n");
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
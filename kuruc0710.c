#include <stdio.h>
int main (void)
//�t�B�{�i�b�`
{
    int num,i,ans1=0,ans2=1,next;

    printf("How many numbers are dusplayed�H\n");
    scanf("%d",&num);

         if (num==1)
        {
            printf("%d\n",ans1);
        }
        
        else if (num>=2)
        {
            printf("%d\n%d\n",ans1,ans2);
        
        
        for ( i = 0; i < num; i++)
        {
            if (num<=1)
            {
                next=1;
            }else{
                next=ans1+ans2;
                ans1=ans2;
                ans2=next;
            }
            
            printf("%d\n",next);

        }
        
        }
             
        
        
        

    return 0;
}
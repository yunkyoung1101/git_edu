 do
    {
        printf("数を入力\n");
        scanf("%d",&num);
        if (num1>num)
        {
            printf("それより大きい\n");
        }else if (num1<num)
        {
            printf("それより小さい\n");
        }
        
        num2++;
        
    } while (num1!=num);

    
    printf("%d回目で正解\n",num2);

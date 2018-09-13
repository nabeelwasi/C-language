       #include<stdio.h>
    #include<conio.h>
    main()
    {
        int a,b,c;
        printf("\n Please enter the value of A: ");
        scanf("%d",&a);
        printf("\n Please enter the value of B: ");
        scanf("%d",&b);
        printf("\n Please enter the value of C: ");
        scanf("%d",&c);
        if (a<b && a<c)
            printf("\n %d is Minimum which is value of A",a);
        else(b<a && b<c)
            printf("\n %d is Minimum which is value of B",b);

        if (a>b && a>c)
            printf("\n\n %d is Maximum which is value of A",a);
        elseif(b>a && b>c)
            printf("\n\n %d is Maximum which is value of B",b);
        else
            printf("\n\n %d is Minimum which is value of C",c);

        getch();
    }

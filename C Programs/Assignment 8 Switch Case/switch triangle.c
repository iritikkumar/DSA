    main()
    {
        int a,b,c,x;
        while(1)
        {
            system("cls");
            printf("\n1.Check Isosceles Triangle.");
            printf("\n2.Check Right angled Triangle.");
            printf("\n3.Check Equilateral Triangle.");
            printf("\n4.Press 4 to exit.");
            printf("\nEnter your choice.");
            scanf("%d",&x);
            switch(x)
            {
                case 1:
                    printf("Enter the value of a,b,c: ");
                    scanf("%d%d%d",&a,&b,&c);
                    if((a==b&&b!=c)||(b==c&&a!=c))
                        printf("Isosceles Triangle.");
                    else
                        printf("Not Isosceles Triangle.");
                    break;
                case 2:
                    printf("Enter the value of a,b,c: ");
                    scanf("%d%d%d",&a,&b,&c);
                    if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
                        printf("Right Angled Triangle.");
                    else
                        printf("Not Right Angled Triangle.");
                    break;
                case 3:
                    printf("Enter the value of a,b,c: ");
                    scanf("%d%d%d",&a,&b,&c);
                    if(a==b&&b==c)
                        printf("Equilateral Triangle.");
                    else
                        printf("Not Equilateral Triangle.");
                    break;
                case 4:
                    exit(0);
                default:
                    printf("Invalid choice.");
                    break;
            }
            getch();
        }
    }

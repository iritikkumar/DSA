main()
{
     int a,b,x;
      while(1)
     {
     system("cls");
     printf("\n1. Addition");
     printf("\n2. Subtraction");
     printf("\n3. Multiplication");
     printf("\n4. Division");
     printf("\n5. Exit");
     printf("\nEnter your choice: ");
     scanf("%d",&x);

         switch(x)
         {
            case 1:
                printf("Enter the two numbers:");
                scanf("%d%d",&a,&b);
                printf("The sum is %d",a+b);
                break;
            case 2:
                printf("Enter the two numbers:");
                scanf("%d%d",&a,&b);
                printf("The difference is %d",a-b);
                break;
            case 3:
                printf("Enter the two numbers:");
                scanf("%d%d",&a,&b);
                printf("The product is %d",a*b);
                break;
            case 4:
                printf("Enter the two numbers:");
                scanf("%d%d",&a,&b);
                printf("The quotient is %d",a+b);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice.");
                break;
         }
         getch();

     }
}

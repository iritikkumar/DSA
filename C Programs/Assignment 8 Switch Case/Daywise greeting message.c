main()
{
    int x;
    while(1)
    {
        system("cls");
        printf("Enter the day number:");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Monday: A goal is a dream with a deadline.");
            break;
            case 2:
            printf("Tuesday: An entrepreneur is someone who jumps off a cliff and builds a plane on the way down.");
            break;
            case 3:
            printf("Wednesday: I don't look to jump over seven-foot bars. I look for one-foot bars that I can step over.");
            break;
            case 4:
            printf("Thursday: You can't have a million dollar dream with a minimum wage work ethic.");
            break;
            case 5:
            printf("Friday: The most dangerous poison is the feeling of achievement. The antidote is to, every evening, think what can be done better tomorrow.");
            break;
            case 6:
            printf("Saturday: The true sign of intelligence is not knowledge but imagination.");
            break;
            case 7:
            printf("Sunday: The most courageous act is still to think for yourself. Aloud.");
            break;
            default:
            printf("Invalid choice.");
            exit(0);
        }
        getch();
    }
}

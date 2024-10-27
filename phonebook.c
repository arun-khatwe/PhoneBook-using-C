#include<stdio.h>
 
int main()
{
    char n[50];
    int a;
    int p;
    int d;
    char add[50];

    char na[50];
    int ag;
    int ph;
    int da;
    int addr[50];

    printf("Welcome To Phone Book\n\n");

    printf("Menu\n");

    printf("Press 1 to add the contact\n\n");

    int x;
    printf("Enter\n");
    scanf("%d", &x);

    if (x==1)
    {
        int y;

        printf("Enter the number of contact to be added : ");
        scanf("%d", &y);

        if(y==1)
        {
            printf("----------------------------\n");
            printf("Name : ");
            scanf("%s", &n);
            printf("Age : ");
            scanf("%d", &a);
            printf("Phone Number : ");
            scanf("%d", &p);
            printf("Data of Birth : ");
            scanf("%d", &d);
            printf("Address : ");
            scanf("%s", &add);
            printf("---------------------\n");
        }
        else if (y == 2)
        {
            printf("----------------------------\n");
            printf("Name : ");
            scanf("%s", &n);
            printf("Age : ");
            scanf("%d", &a);
            printf("Phone Number : ");
            scanf("%d", &p);
            printf("Data of Birth : ");
            scanf("%d", &d);
            printf("Address : ");
            scanf("%s", &add);
            printf("---------------------\n");

            printf("----------------------------\n");
            printf("Name : ");
            scanf("%s", &na);
            printf("Age : ");
            scanf("%d", &ag);
            printf("Phone Number : ");
            scanf("%d", &ph);
            printf("Data of Birth : ");
            scanf("%d", &da);
            printf("Address : ");
            scanf("%s", &addr);
            printf("---------------------\n");   
        }
        printf("Press 2 to see the entered contact\n");
        printf("Press 3 to exit the phone book\n");

        int z;
        printf("Enter\n");
        scanf("%d", &z);

        if (z==2)
        {
            int num;
            printf("Enter the number of contact to be viewed :");
            scanf("%d", &num);

            if (num==1)
            {
                printf("----------------------------\n");
                printf("Name : ");
                printf("%s", n);
                printf("Age : ");
                printf("%d", a);
                printf("Phone Number : ");
                printf("%d", p);
                printf("Data of Birth : ");
                printf("%d", d);
                printf("Address : ");
                printf("%s", add);
                printf("---------------------\n"); 
            }
            else if(num==2)
            {
                printf("----------------------------\n");
                printf("Name : ");
                printf("%s", n);
                printf("Age : ");
                printf("%d", a);
                printf("Phone Number : ");
                printf("%d", p);
                printf("Data of Birth : ");
                printf("%d", d);
                printf("Address : ");
                printf("%s", add);
                printf("---------------------\n");

                printf("----------------------------\n");
                printf("Name : ");
                printf("%s", na);
                printf("Age : ");
                printf("%d", ag);
                printf("Phone Number : ");
                printf("%d", ph);
                printf("Data of Birth : ");
                printf("%d", da);
                printf("Address : ");
                printf("%s", addr);
                printf("---------------------\n"); 
            }
        }
        else if(z==3)
        {
            printf("Are you sure want to close the phone book\n");
            printf("Press 1 for yess\n");
            printf("Press 2 for no\n");

            int ans;
            printf("Enter\n");
            scanf("%d", &ans);

            if(ans==1)
            {
                printf("The phone book has closed\n");
                printf("Have a good day\n");
            }
            else if(ans==2)
            {
                printf("The phone book has not closed\n");
                printf("You can continue\n");
            }
        }
    }
    else
    {
        printf("Invalid ");
    }
    return 0;
}
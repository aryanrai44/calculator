#include <stdio.h>

void show_menu();
int option();
void choice(int a);
void sum();
void subtract();
void multiply();
void divide();


int main()
{
    show_menu();
    int select = option();
    choice(select);  

    return 0;
}



void show_menu()
{
    printf("1.Sum\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
}

int option()
{
    int a=0;
    printf("Option: ");
    scanf("%d",&a);
    return a;
}

void choice(int a)
{
    switch (a)
    {
    case 1:
        sum();
        break;
    case 2:
        subtract();
        break;
    case 3:
        multiply();
        break;
    case 4:
        divide();
        break;
    default:
        printf("Invalid option\n");
    break;
    }
}



void sum()
{
    int a,b,solution;
    printf("First Number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    solution=a+b;
    printf("%d + %d = %d \n",a,b,solution);
}

void subtract()
{
    int a,b,solution;
    printf("First Number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    solution=a-b;
    printf("%d - %d = %d \n",a,b,solution);
}

void multiply()
{
    int a,b,solution;
    printf("First Number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    solution=a*b;
    printf("%d * %d = %d \n",a,b,solution);
}

void divide()
{
    int a,b,solution;
    printf("First Number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    solution=a/b;
    printf("%d / %d = %d \n",a,b,solution);
}
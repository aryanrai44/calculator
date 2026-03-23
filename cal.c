#include <stdio.h>

int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
float divide (int a, int b);
void show_menu ();
void user_input (int *a,int *b);
void choice (int a);
int login ();


int main ()
{
    login ();
    return 0;
}



























int login ()
{
    int a;
        while (1)
    {
        show_menu ();
        printf("SELECT: ");

        if (scanf("%d",&a) !=1 )
        {
            printf("invalid input ");
            return 1;
        }
        if (a == 5)
            break;
        choice(a);
        }
        return 0;

}

void choice (int a)
{
    switch (a)
    {
    case 1:
        {  int a,b;
           user_input(&a,&b);
           int sum = add (a,b);
           printf("%d + %d = %d \n",a,b,sum);
        }
        break;
    case 2:
         {
           int a,b;
           user_input(&a,&b);
           int sub = subtract (a,b);
           printf("%d - %d = %d \n",a,b,sub);
         }
         break;
    case 3:
         {
           int a,b;
           user_input(&a,&b);
           int multi = multiply (a,b);
           printf("%d * %d = %d \n",a,b,multi);
         }
         break;
    case 4:
         {
           int a,b;
           user_input(&a,&b);
           float div = divide (a,b);
           printf("%d / %d = %.3f \n",a,b,div);
           if (b==0)
            {
              printf("cannot divide with 0.\n");
            }
         }  
         break;
    default:
          printf("invalid input \n");
          break;
    }
}

void show_menu ()
{
    char list [5][10]= {"Add","Subtract","Multiply","Divide","Exit"};
    for (int i=0; i<5; i++)
    {
        int counter=i;
        counter++; 
        printf("%d %s\n",counter,list[i]);   
    }
}

void user_input (int *a,int *b)
{
    printf("First number: ");
    scanf("%d",a);
    printf("Second number: ");
    scanf("%d",b);
}

int add (int a, int b)
{
    return a+b;
}

int subtract (int a, int b)
{
    return a-b;
}

int multiply (int a, int b)
{
    return a*b;
}

float divide (int a, int b)
{
    return (float)a/b;
}

int isprime ()
{
    
}
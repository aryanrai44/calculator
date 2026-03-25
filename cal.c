#include <stdio.h>

int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
float divide (int a, int b);
void show_menu ();
int user_input (int *a,int *b);
void choice (int a);
int login ();
int validator (int *a);

int main ()
{
    login (); 
    return 0;
}



















int validator (int *a)
{ 
            if (scanf("%d",a) !=1 )
        {
            printf("invalid input\n");
        }
        
}

int login ()
{
    int a;
        while (1)
    {
        show_menu ();
        printf("SELECT: ");
        if (validator(&a)!=1)
        {
            return 1;
        }
        

        if (a==5)
        {
            break;
        }
        
        choice(a);
        }
        return 0;

}

void choice (int c)
{
    int a,b;
    user_input(&a,&b);
    switch (c)
    {
    case 1:
        {  
           int sum = add (a,b);
           printf("%d + %d = %d \n",a,b,sum);
        }
        break;
    case 2:
         {
           
           int sub = subtract (a,b);
           printf("%d - %d = %d \n",a,b,sub);
         }
         break;
    case 3:
         {
          
           int multi = multiply (a,b);
           printf("%d * %d = %d \n",a,b,multi);
         }
         break;
    case 4:
         {
          
           if (b==0)
            {
              printf("cannot divide with 0.\n");
            }
            else{
           float div = divide (a,b);
           printf("%d / %d = %.3f \n",a,b,div);}
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

int user_input (int *a,int *b)
{
    printf("First number: ");
    if (validator(a)!=1)
    {
        return 1;
    }
    
    printf("Second number: ");
    if (validator(b)!=1)
    {
        return 1;
    }

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

int isprime (int a)
{
    
}
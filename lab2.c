#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 double delta;
 double result;
 double x1;
 double x2;
 unsigned int N;
 unsigned int variant;
 char c;
 system("color B");

 printf("Enter variant (1 or 2 or 3)");
 printf("\n Variant 1 means choosing count of columns");
 printf ("\n Variant 2 means choosing step from first to second x:");
 scanf("%d",&variant);

    while(variant!= 1  &&  variant!= 2 && variant!= 3)
        {
        printf("Error. Please try again:");
        scanf("%d",&variant);
    }
      if(variant == 1)
        {
 printf("\n Enter x1: ");
 scanf("%lf",&x1);
 printf("\n Enter x2: ");
 scanf("%lf",&x2);
 printf("\n Enter  N: ");
 scanf("%u",&N);
 int i=1;

 printf("\n***************************************");
 printf("\n*     N     *     X      *     F(X)   *");
 printf("\n***************************************");

    delta=(x2-x1)/(N-1);
    for(i;i<=N;i++)
    {
    result=-0.5*pow((x1-64),3)-3*pow(x1,2)+10;
     printf("\n+-----------+------------+------------+");
    printf("\n|%11.0d|%12.2f|%12.2f|\n",i,x1,result);
    if(i%10==0)
    {
        if(i<11)
        {
            printf("\nPress Any Key to Continue...");
        }
        c = getch();
    }
    x1=x1+delta;
    }
    }

else
{
 printf("\n Enter x1: ");
 scanf("%lf",&x1);
 printf("\n Enter x2: ");
 scanf("%lf",&x2);
 printf("\n Enter delta:");
 scanf("%lf",&delta);
 int i=1;

 printf("\n***************************************");
 printf("\n*     N     *     X      *     F(X)   *");
 printf("\n***************************************");


    while(x1<=x2)
    {
    result=-0.5*pow((x1-64),3)-3*pow(x1,2)+10;
    printf("\n+-----------+------------+------------+");
    printf("\n|%11.0d|%12.2f|%12.2f|\n",i,x1,result);
    if(i%10==0)
    {
        if(i<11)
        {
            printf("\nPress Any Key to Continue...");
        }
        c = getch();
    }
    x1=x1+delta;
    i++;
    }
 }
    if (variant==3)
    {
        printf ("variant 3");

    }
    c = getch();
    return 0;
}

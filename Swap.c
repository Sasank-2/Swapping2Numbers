#include<stdio.h>
#include<conio.h>
  main()
   {
   int a,b,c;
   printf("Enter 1st Number : ");
   scanf("%d",a);
   printf("Enter 2nd Number : ");
   scanf("%d",b);
   c=a;
   a=b;
   b=c;
   printf("1st Number after swapping : %d",a);
   printf("2nd Number after swapping : %d",b);
   }

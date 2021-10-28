#include <stdio.h>
#include <conio.h>

void main()
{
   int no1, no2 ,o1,o2,o3,o4,o5;
   clrscr();
   printf("a:");
   scanf("%d",&no1);
   printf("b:");
   scanf("%d",&no2);
   o1=no1+no2;
   printf("add of %d\n",o1);
   o2=no1-no2;
   printf("sub of %d\n",o2);
   o3=no1*no2;
   printf("into of %d\n",o3);
   o4=no1/no2;
   printf("dev of %d\n",o4);
   o5=no1%no2;
   printf("mod of %d\n",o5);
   getch();
}
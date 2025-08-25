#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b ;
 /* here a and b are two numbers either a>b or b>a */
 clrscr();
 printf("Enter two numbers");
 scanf("%d %d",&a,&b);
 if(a>b)
 {
   printf("largest = %d \n",a);
   printf("smallest = %d\n",b);
 }
 else(b>a);
 {
   printf("largest =%d \n",b);
   printf("smallest = %d \n",a);
 }
 getch();
 return 0;
 }
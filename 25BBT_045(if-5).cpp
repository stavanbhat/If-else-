#include<stdio.h>
#include<conio.h>
int main()
{
 int gross_sales , net_sales, discount ;
 printf("Enter value of gross_sales");
 scanf("%d",&gross_sales);
 if(gross_sales > 20000) 
 {
  discount = (15 * gross_sales) / 100 ;
  printf("%d = (15 * %d) / 100 ",discount, gross_sales);
 }
  if(gross_sales > 10000)
 {
  discount = (10 * gross_sales) / 100;
  printf("%d = (10 * %d) / 100",discount, gross_sales) ;
 } 
 else ;
 {
  discount  = (5 * gross_sales) / 100 ;
  printf("%d = (5 * gross_sales) / 100",discount, gross_sales);
 }
  net_sales = gross_sales - discount ;
  printf("%d = %d - %d",net_sales, gross_sales, discount);
  getch ();
  return 0;
 }
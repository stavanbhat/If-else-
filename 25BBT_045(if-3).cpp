#include<stdio.h>
#include<conio.h>
int main()
{
 int net_salary , gross_salary,  allowances, deduction ;
 clrscr();
 printf("Value of gross_salary");
 scanf("%d",& gross_salary);
 if (gross_salary > 10000)
 {
  allowances = (10 * gross_salary)/ 100;
  printf("%d = (10 * %d) / 100",allowances,gross_salary);
  deduction = (3 * gross_salary) / 100;
  printf("%d = (3 * %d) /100",deduction, gross_salary);
 }
  else(gross_salary > 5000);
 { 
 allowances = (7 * gross_salary)/ 100;
 printf("%d = (3 * %d) / 100",allowances, gross_salary);
 deduction = (2 * gross_salary) /100;
 printf("%d = (2 * %d) /100", deduction, gross_salary);
 }
  net_salary = gross_salary + allowances - deduction ;
  printf("%d = %d + %d - %d",net_salary, gross_salary, allowances,deduction);
  getch();
  return 0;
  }
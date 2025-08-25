#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c,l,s;
 clrscr();
 printf("Enter three values");
 scanf("%d %d %d",&a ,&b ,&c);
 if (a>b)
 {
   l = a ,s =b ;
 }
 else (a<b);
 {
   l =b ,s = a ;
 }
 if (c>l)
    l = c ;
 if (c<s) 
    s = c ;
 if(l==s) 
    printf("all values are same");
 else
    printf("%d > %s",l,s);  
 getch();
 return 0;
 }
#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    clrscr();   // clear screen (works in Turbo C)

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 7 == 0)
        printf("%d is divisible by 7.", num);
    else
        printf("%d is not divisible by 7.", num);

    getch(); 
    return 0; // to hold screen
}
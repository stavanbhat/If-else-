#include<stdio.h>
#include<conio.h>
int main()
 {
    int m1, m2, m3, total,avg;
    clrscr();
    printf("Enter marks of three subjects /n");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);

    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail\n");
    }
    else {
        if (avg >= 70)
            printf("Grade: Distinction\n");
        else if (avg >= 60)
            printf("Grade: First Class\n");
        else if (avg >= 50)
            printf("Grade: Second Class\n");
        else if (avg >= 35)
            printf("Grade: Third Class\n");
        else
            printf("Result: Fail\n");
    }
    getch();
    return 0;
}

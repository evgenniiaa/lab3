#define _CRT_SECURE_NO_WARNINGS
#define D 2.54
#include <stdio.h>
#include <locale.h> 

//лаб3

int main()
{
    setlocale(LC_CTYPE, "RUS");
    zadanie1();
    zadanie2();
    zadanie3();
}

int zadanie1()
{
    int num;
    printf("1) введите число: ");
    scanf("%d", &num);
    printf("Выведено число %d\n", num);
    return 0;
}

int zadanie2()
{
    int dym;
    float result;
    printf("2) введите число: ");
    scanf("%d", &dym);
    result = D * dym;
    printf("%d дюймов – это %.1f см\n", dym, result);
    return 0;
}

int zadanie3()
{
    double a, b, res1, res2, res3;
    printf("3.1) введите число а: ");
    scanf("%lf", &a);
    printf("3.2) введите число b: ");
    scanf("%lf", &b);

    puts("----------------------");
    printf("|%6s|%6s|%6s|\n", "a*b", "a+b", "a-b");
    puts("----------------------");
    printf("|%4.0lf*%.0lf|%4.0lf+%.0lf|%4.0lf-%.0lf|\n", a, b, a, b, a, b);
    puts("----------------------");
    printf("|%6.0lf|%6.0lf|%6.0lf|\n", a * b, a + b, a - b);
    puts("----------------------");
}

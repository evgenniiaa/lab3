#define _CRT_SECURE_NO_WARNINGS
#define D_ENG 2.54
#define D_ESP 2.32166
#define D_LIT 2.7076
#include <stdio.h>
#include <locale.h> 

//лаб3


int zadanie1()
{
    int num;
    int num2;

    puts("1) введите число");
    scanf("%d", &num);
    printf("введено число %d\n", num);

    puts("введите второе число");
    scanf("%d", &num2);
    printf("введено число %d\n", num2);

    printf("сумма:        %d + %d = %d\n", num2, num, num2 + num);
    printf("разность:     %d - %d = %d\n", num2, num, num2 - num);
    printf("произведение: %d * %d = %d\n", num2, num, num2 * num);
    printf("частное:      %d / %d = %.2f\n", num2, num, num2 / (num * 1.0));
    printf("остаток:      %d %% %d = %d\n", num2, num, num2 % num);
}

int zadanie2()
{
    int dym;
    float result_eng, result_esp, result_lit;

    puts("2)введите число дюймов");
    scanf("%d", &dym);

    result_eng = D_ENG * dym;
    result_esp = D_ESP * dym;
    result_lit = D_LIT * dym;

    printf("%d английских дюймов    – это %.2f см\n", dym, result_eng);
    printf("%d испанских pulgada     – это %.2f см\n", dym, result_esp);
    printf("%d старолитовских дюймов – это %.2f см\n", dym, result_lit);
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
int main()
{
    setlocale(LC_CTYPE, ".UTF-8");
    zadanie1();
    zadanie2();
    zadanie3();
}

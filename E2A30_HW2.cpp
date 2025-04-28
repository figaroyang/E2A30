#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    puts("==========================================================================");
    puts("                    Welcome to Your Personalized UI!                     ");
    puts("|----------------------------------------------------------------------");
    puts("                                                                       ");
    puts("|  EEEEEEEEEEE       222222222           A           3333333     0000000.  ");
    puts("|  E                        22          A A               33     0     0   ");
    puts("|  E                       22          A   A              33     0     0   ");
    puts("|  EEEEEEEEEEE            22          A     A        3333333     0     0   ");
    puts("   EEEEEEEEEEE           22          AAAAAAAAA       3333333     0     0   ");
    puts("|  E                    22          AAAAAAAAAAA           33     0     0   ");
    puts("|  E                   22          A           A          33     0     0   ");
    puts("|. EEEEEEEEEEE       22222222     A             A    3333333     0000000   ");
    puts("                                                                       ");
    puts("|----------------------------------------------------------------------");
    puts("============================================================================");
    char word[7] = "";
    strcat(word, "F");
    puts(word);
    strcat(word, "i");
    puts(word);
    strcat(word, "g");
    puts(word);
    strcat(word, "a");
    puts(word);
    strcat(word, "r");
    puts(word);
    strcat(word, "o");
    puts(word);
    return 0;
    int i, password = 2025;
    char ch1, ch2, j, tt;
    int k, time = 0, num, y = 1, z;
    for (i = 1; i <= 3; i++)
    {
        printf("請輸入四位密碼: ");
        scanf("%d", &password);
        if (password == 2025)
        {
            printf("密碼正確!Welcome!\n");
            system("pause");
            break;
        }
        else
        {
            printf("密碼錯誤\n");
        }
        if (i >= 3)
        {
            printf("密碼錯誤已達三次\a");
            return 0;
        }
    }
    system("cls");
    while (1)
    {
        printf("--------------------------------\n");
        printf("| a. 畫出直角三角形 |\n");
        printf("| a. 顯示乘法表 |\n");
        printf("| c. 結束 |\n");
        printf("--------------------------------\n");
        fflush(stdin);
    }
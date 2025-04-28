#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

int n;
int main(void)
{
    system("chcp 65001");
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
    int i, password = 2025;
    char ch1, ch2, j;
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
        printf("請輸入A-C或a-c:\n");
        scanf("%c", &ch1);

        switch (ch1)
        {
        case 'A':
        case 'a':

            system("cls");
            printf("請輸入字元(a~n):");
            fflush(stdin);
            scanf("%d", &n);
            if (n >= 1 && n <= 9)
            {
                for (z = 1; z <= n; z--)
                {
                    for (y = 1; y <= z; y++)
                    {
                        printf("%d", y);
                    }
                    printf("\n");
                }
                break;
            }
            else
            {
                printf("輸入錯誤，請重新輸入\n");
            }

            system("pause");
            system("cls");
            break;

        case 'B':
        case 'b':
            int num;
            printf("輸入整數1~9:", num);
            scanf("%d", &num);

            if (num < 1 || num > 9)
            {
                printf("\n乘法表 (%dx%d)\n\n", num, num);
            }
            for (int i = 1; i <= num; i++)
            {
                for (int j = 1; j <= num; j++)
                {
                    printf("%4d", i + j);
                }
            }
            system("pause");
            system("cls");
            break;

        case 'c':
        case 'C':
        int tt;
            while (1)
            {
                printf("Continue? (y/n)\n");
                fflush(stdin);
                scanf("%c", &tt);
                if (tt == 'Y' || tt == 'y')
                {
                    system("PAUSE");
                    system("cls");
                    break;
                }
                else if (tt == 'N' || tt == 'n')
                {
                    printf("end\n");
                    system("PAUSE");
                    return 0;
                }
                else
                {
                    printf("輸入錯誤，重新輸入\n");
                }
            }
            break;
        default:
            printf("輸入錯誤");
            system("PAUSE");
            system("cls");
        }
    }
}/*這次的C語言作業，我學到了怎麼用 scanf 接收使用者輸入，還有怎麼用迴圈來畫出直角三角形和乘法表。一開始在處理字元輸入的時候，因為忘記加空格，結果輸入一直怪怪的，後來才知道要在 scanf 加上空白，才能正確讀取字元。

另外，乘法表的排版也花了一點時間調整，因為要讓數字對齊，看起來才整齊。這次的作業也讓我更熟悉了 system("cls") 和 getch() 的用法，知道怎麼清除畫面和暫停畫面，讓程式跑起來比較有順序感。

整體來說，這次作業讓我對C語言的基本操作更熟悉了，也發現小細節真的很重要，希望之後可以越寫越順利。*/


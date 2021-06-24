#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>

void shufflecard(int *arr, int size); //ham trao bai
void cardnum(int so);                 //ham doi so hang sang so bai
void cardchar(int chat);              //ham doi so cot sang chat bai
void intuquy(int *p, int n);          //ham in tu quy

int main(void)
{

    //setup

    int c[52];
    for (int i = 0; i < 52; ++i)
    {
        c[i] = i + 1;
    }

    int check[13][4]; //dung de check tu quy

    //trao bai

    shufflecard(c, 52);

    // In bai

    printf("Player 1: ");
    for (int i = 0; i <= 12; ++i)
    {
        int so = c[i] / 4;
        int chat = c[i] % 4;
        cardnum(so);
        cardchar(chat);
        check[so][chat] = 1;
    }
    printf("\n");

    printf("Player 2: ");
    for (int i = 13; i <= 25; ++i)
    {
        int so = c[i] / 4;
        int chat = c[i] % 4;
        cardnum(so);
        cardchar(chat);
        check[so][chat] = 2;
    }
    printf("\n");

    printf("Player 3: ");
    for (int i = 26; i <= 38; ++i)
    {
        int so = c[i] / 4;
        int chat = c[i] % 4;
        cardnum(so);
        cardchar(chat);
        check[so][chat] = 3;
    }
    printf("\n");

    printf("Player 4: ");
    for (int i = 39; i <= 51; ++i)
    {
        int so = c[i] / 4;
        int chat = c[i] % 4;
        cardnum(so);
        cardchar(chat);
        check[so][chat] = 4;
    }
    printf("\n");

    //check tu quy

    int p1[3] = {0, 0, 0}; //khoi tao tu quy cua nguoi choi
    int p2[3] = {0, 0, 0};
    int p3[3] = {0, 0, 0};
    int p4[3] = {0, 0, 0};

    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    for (int i = 0; i < 13; ++i) //luu tu quy cua nguoi choi
    {
        if ((check[i][0] == check[i][1]) && (check[i][1] == check[i][2]) && (check[i][2] == check[i][3]))
        {
            if (check[i][0] == 1)
            {
                p1[s1] = i;
                ++s1;
            }
            else if (check[i][0] == 2)
            {
                p2[s2] = i;
                ++s2;
            }
            else if (check[i][0] == 3)
            {
                p3[s3] = i;
                ++s3;
            }
            else
            {
                p4[s4] = i;
                ++s4;
            }
        }
    }

    // in tu quy

    intuquy(p1, 1);
    intuquy(p2, 2);
    intuquy(p3, 3);
    intuquy(p4, 4);

    return 0;
}

void shufflecard(int *arr, int size)
{
    srand(time(NULL));

    int min;
    int max = size - 1;
    int swap;

    int i = 0;
    while (i < size - 1)
    {
        min = i + 1;
        swap = rand() % (max - min + 1) + min;
        int tmp = arr[i];
        arr[i] = arr[swap];
        arr[swap] = tmp;
        i++;
    }
}

void cardchar(int chat)
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    switch (chat)
    {
    case 0:
        wprintf(L"\x2660 ");
        break;
    case 1:
        wprintf(L"\x2663 ");
        break;
    case 2:
        wprintf(L"\x2666 ");
        break;
    case 3:
        wprintf(L"\x2665 ");
        break;
    default:
        break;
    }
    _setmode(_fileno(stdout), _O_TEXT);
}

void cardnum(int so)
{
    if (so == 0)
    {
        printf("A");
    }
    else if (so >= 1 && so <= 9)
    {
        printf("%d", so + 1);
    }
    else if (so == 10)
    {
        printf("J");
    }
    else if (so == 11)
    {
        printf("Q");
    }
    else
        printf("K");
}

void intuquy(int *p, int n)
{
    int i = 0;
    if (*p == 0)
    {
        printf("Nguoi choi %d khong co tu quy\n", n);
    }
    else
    {
        printf("Nguoi choi %d co tu quy ", n);
        while (*(p + i) != 0)
        {
            cardnum(*(p + i));
            ++i;
            printf(" ");
        }
        printf("\n");
    }
}

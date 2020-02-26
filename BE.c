#include <stdio.h>

int main()
{
    int menu,n;
    printf("1. Bintang bentuk segitiga siku-siku\n");
    printf("2. Bintang bentuk jam pasir ganjil\n");
    printf("3. Keluar\n");
    printf("Pilih : ");
    scanf("%d", &menu);
    switch(menu)
    {
        case 1 : printf("tinggi : \n");
                 scanf("%d", &n);
                 bintang1(n);
                 break;
        case 2 : printf("tinggi : \n");
                 scanf("%d", &n);
                 bintang2(n);
                 break;
    }
}

int bintang1 (int n)
{
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int bintang2 (int n)
{
    for(int i=0;i<n/2 + 1;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int k=n;k>i+j;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<n/2;i++)
    {
        int j;
        for(j=n/2-1;j>i;j--)
        {
            printf(" ");
        }
        for(int k=n-j;k>i;k--)
        {
            printf("*");
        }
        printf("\n");
    }

}

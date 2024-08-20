#include <stdio.h>


int main()
{
    int n;
    int check = 1;
    while (check)
    {
        do
        {
            // Yêu cầu người dùng nhập giá trị của n
            printf("Nhap mot so nguyen duong n: ");
            scanf("%d", &n);
            if (n <= 1)
            {
                printf("wrong number format try again \n ");
            }
        } while (n <= 1);
        int checkPrimeNumber = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                checkPrimeNumber = 0;
                break;
            }
        }


        if (checkPrimeNumber == 1)
        {
            printf("%d la so nguyen to.\n", n);
        }
        else
        {
            printf("%d ko phai  la so nguyen to.\n", n);
        }
    }
    return 0;
}

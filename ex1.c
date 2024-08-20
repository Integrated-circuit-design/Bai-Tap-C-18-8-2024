#include <stdio.h>


int main()
{
    
    int n, sum = 0;
    int check = 1;
    while (check)
    {
        do
        {
            // Yêu cầu người dùng nhập giá trị của n
            printf("Nhap mot so nguyen duong n: ");
            scanf("%d", &n);
            if (n <= 0)
            {
                printf("negative number try again \n ");
            }
        } while (n <= 0);


        // Tính tổng của các số nguyên từ 1 đến n
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }


        // In kết quả ra màn hình
        printf("total form 1 to  %d is %d\n", n, sum);
        printf("do you want continue (y:1 n:0): ");
        scanf("%d", &check);


    }


    return 0;
}

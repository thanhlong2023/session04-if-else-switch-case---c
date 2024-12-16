#include <bits/stdc++.h>
int main()
{
    int month;
    printf("Nhập số tháng: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Tháng %d có 31 ngày\n", month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Tháng %d có 30 ngày \n", month);
        break;
    case 2:
        printf("Tháng 2 có 28 hoặc 29 ngày\n");
        break;
    default:
        printf("Số tháng không hợp lệ \n");
        break;
    }
    return 0;
}
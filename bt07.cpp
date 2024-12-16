#include <stdio.h>

int main()
{
    int year;
    printf("Nhập số năm: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d là năm nhuận\n", year);
    }
    else
    {
        printf("%d không phải là năm nhuận\n", year);
    }

    return 0;
}

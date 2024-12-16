#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Nhập ngày: ");
    scanf("%d", &day);
    printf("Nhập tháng: ");
    scanf("%d", &month);
    printf("Nhập năm: ");
    scanf("%d", &year);

    // Kiểm tra năm nhuận
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Kiểm tra tính hợp lệ của ngày tháng năm
    int isValidDate = 1;
    if (year < 1 || month < 1 || month > 12 || day < 1)
    {
        isValidDate = 0;
    }
    else
    {
        if (month == 2)
        {
            if (isLeapYear)
            {
                if (day > 29)
                {
                    isValidDate = 0;
                }
            }
            else
            {
                if (day > 28)
                {
                    isValidDate = 0;
                }
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
            {
                isValidDate = 0;
            }
        }
        else
        {
            if (day > 31)
            {
                isValidDate = 0;
            }
        }
    }

    if (isValidDate)
    {
        printf("Ngày %d/%d/%d là ngày hợp lệ\n", day, month, year);
    }
    else
    {
        printf("Ngày %d/%d/%d không hợp lệ\n", day, month, year);
    }

    return 0;
}

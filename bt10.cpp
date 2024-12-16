// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Nhập 3 số nguyên: ");
//     scanf("%d %d %d", &a, &b, &c);

//     // Sắp xếp 3 số theo thứ tự từ nhỏ đến lớn
//     if (a > b)
//     {
//         int temp = a;
//         a = b;
//         b = temp;
//     }
//     if (a > c)
//     {
//         int temp = a;
//         a = c;
//         c = temp;
//     }
//     if (b > c)
//     {
//         int temp = b;
//         b = c;
//         c = temp;
//     }

//     printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", a, b, c);

//     return 0;
// }
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Nhập 3 số nguyên: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", a, b, c);
        }
        else
        {
            printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", a, c, b);
        }
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
            printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", b, a, c);
        }
        else
        {
            printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", b, c, a);
        }
    }
    else
    {
        if (a <= b)
        {
            printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", c, a, b);
        }
        else
        {
            printf("Các số theo thứ tự từ nhỏ đến lớn: %d %d %d\n", c, b, a);
        }
    }

    return 0;
}

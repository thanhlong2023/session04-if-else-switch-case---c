#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Nhập 3 cạnh của tam giác: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Là 3 cạnh tam giác\n");
    }
    else
    {
        printf("Không phải 3 cạnh tam giác\n");
    }

    return 0;
}

#include <bits/stdc++.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    {
        if (a <= c && b >= c)
        {
            printf("Số %d nằm trong đoạn từ %d tới %d", c, a, b);
        }
        else
        {
            printf("Số c nằm ngoài đoạn a b");
        }
    }
    return 0;
}
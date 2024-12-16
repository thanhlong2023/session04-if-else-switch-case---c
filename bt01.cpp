#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d Đây là số nguyên dương", n);
    }
    else if (n < 0)
    {
        printf("%d Đây là số nguyên âm", n);
    }
    else
    {
        printf("Đây là số 0");
    }
    return 0;
}
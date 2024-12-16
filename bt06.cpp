#include <stdio.h>

#define MUC_1 10000
#define MUC_2 15000
#define MUC_3 20000
#define MUC_4 25000
#define MUC_5 30000

int main()
{
    int chiSoCu, chiSoMoi, soDien;
    float tienDien = 0;
    printf("Nhập chỉ số cũ: ");
    scanf("%d", &chiSoCu);
    printf("Nhập chỉ số mới: ");
    scanf("%d", &chiSoMoi);

    soDien = chiSoMoi - chiSoCu;

    if (soDien < 0)
    {
        printf("Chỉ số mới phải lớn hơn hoặc bằng chỉ số cũ.\n");
        return 1;
    }

    if (soDien < 50)
    {
        tienDien = soDien * MUC_1;
    }
    else if (soDien >= 50 && soDien < 100)
    {
        tienDien = 50 * MUC_1 + (soDien - 50) * MUC_2;
    }
    else if (soDien >= 100 && soDien < 150)
    {
        tienDien = 50 * MUC_1 + 50 * MUC_2 + (soDien - 100) * MUC_3;
    }
    else if (soDien >= 150 && soDien < 200)
    {
        tienDien = 50 * MUC_1 + 50 * MUC_2 + 50 * MUC_3 + (soDien - 150) * MUC_4;
    }
    else if (soDien >= 200)
    {
        tienDien = 50 * MUC_1 + 50 * MUC_2 + 50 * MUC_3 + 50 * MUC_4 + (soDien - 200) * MUC_5;
    }

    printf("Số điện tiêu thụ: %d kWh\n", soDien);
    printf("Tiền điện phải trả: %.2f VND\n", tienDien);

    return 0;
}

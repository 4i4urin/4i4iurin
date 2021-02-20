#include <stdio.h>

#define N 20

int main(void)
{
    int i = 0;
    double volt_1 = 0, volt_2 = 0;
    double volt_1_old = 0, volt_2_old = 0;
    printf(" i  |  volt_1  |    volt_2\n");
    do
    {
        printf("%3d : %0.6f | %0.6f\n", i, volt_1, volt_2);
        volt_1 = 0.04 - 0.04 * volt_2 - 0.86 * volt_1;
        volt_2 = 0.024 + 0.976 * volt_2 - 0.004 * volt_1;
        i++;
    } while (i < N);
    return 0;
}

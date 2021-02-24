#include <stdio.h>
#include <math.h>

int main(void)
{
    int i = 0;
    double volt_1 = 0, volt_2 = 0;
    double volt_1_old = 0, volt_2_old = 0;
    printf(" i  |  volt_1  |    volt_2\n");
    do
    {
    	volt_2_old = volt_2; volt_1_old = volt_1;
        printf("%0.6f\n", volt_1_old);
        volt_2 = 0.024 + 0.976 * volt_2_old - 0.004 * volt_1_old;
        volt_1 = 0.04 - 0.04 * volt_2_old + 0.86 * volt_1_old;
        i++;
    }  while ((fabs(volt_1 - volt_1_old) > 0.0001) && (fabs(volt_2 - volt_2_old) > 0.0001));
    return 0;
}

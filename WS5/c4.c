#include <stdio.h>

int main() {
    int kWh;
    int cost = 0;
    
    printf("So dien tieu thu (kWh): ");
    scanf("%d", &kWh);

    if (kWh < 0) {
        printf("So lieu khong hop le!\n");
    } else {
        if (kWh <= 50) {
            cost = kWh * 1806;
        } else if (kWh <= 100) {
            cost = 50 * 1806 + (kWh - 50) * 1866;
        } else if (kWh <= 200) {
            cost = 50 * 1806 + 50 * 1866 + (kWh - 100) * 2167;
        } else if (kWh <= 300) {
            cost = 50 * 1806 + 50 * 1866 + 100 * 2167 + (kWh - 200) * 2729;
        } else if (kWh <= 400) {
            cost = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + (kWh - 300) * 3050;
        } else {
            cost = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + 100 * 3050 + (kWh - 400) * 3151;
        }
        printf("So tien: %d VND\n", cost);
    }

    return 0;
}


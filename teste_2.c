#include <stdint.h>

uint16_t decimalToBCD(uint16_t decimal) {
    uint16_t bcd = 0;
    uint16_t multiplier = 1;

    while (decimal > 0) {
        uint16_t digit = decimal % 10;
        decimal /= 10;

        bcd += (digit << (4 * (3 - multiplier)));
        multiplier++;
    }

    return bcd;
}
int main() {
    uint16_t decimal = 2;
    uint16_t bcd = decimalToBCD(decimal);

    printf("Decimal: %u, BCD: 0x%X\n", decimal, bcd);

    return 0;
}


// 0010
// 0x02
//ainda executando com erro

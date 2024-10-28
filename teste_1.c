#include <stdint.h>

uint32_t encontrar_primeiro_bit_1(uint32_t n) {
    // Verifica se o número é zero
    if (n == 0) {
        return -1; // ou qualquer outro valor que indique que não há bits 1
    }

    // Inicializa a posição do bit mais significativo
    uint32_t posicao = 0;

    // Enquanto o número for diferente de zero
    while (n != 0) {
        // Verifica se o bit menos significativo é 1
        if (n & 1) {
            return posicao;
        }

        // Desloca o número para a direita (remove o bit menos significativo)
        n >>= 1;

        // incrementa a posição do bit
        posicao++;
    }

    // Se o número for zero e não foi encontrado nenhum bit 1, retorna -1
    return -1;
}
int main() {
    uint32_t numero = 0x00000010; // 00000000 00000000 00000000 00010000
    uint32_t posicao = encontrar_primeiro_bit_1(numero);

    if (posicao != -1) {
        printf("A posição do primeiro bit 1 é: %u\n", posicao);
    } else {
        printf("Não há bits 1 no número.\n");
    }

    return 0;
}

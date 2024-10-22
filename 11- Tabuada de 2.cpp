#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    int numero = 2;  // Número base para a tabuada de soma

    // Estrutura de repetição for para gerar a tabuada de soma de 2
    for (int i = 0; i <= 10; ++i) {
        std::cout << numero << " + " << i << " = " << (numero + i) << std::endl;
    }

    return 0;  // Indica que o programa terminou com sucesso
}

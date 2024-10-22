#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    int i = 0;  // Inicializa a variável de controle

    // Estrutura de repetição while para imprimir o texto 10 vezes
    while (i < 10) {
        std::cout << "Repetindo até chegar no valor desejado." << std::endl;
        ++i;  // Incrementa a variável de controle
    }

    return 0;  // Indica que o programa terminou com sucesso
}

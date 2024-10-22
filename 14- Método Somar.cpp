#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

// Método para somar dois valores
float somar(float a, float b) {
    return a + b;  // Retorna a soma de a e b
}

int main() {
    float valor1, valor2, resultado;

    // Solicita ao usuário para inserir os dois valores
    std::cout << "Digite o primeiro valor: ";
    std::cin >> valor1;

    std::cout << "Digite o segundo valor: ";
    std::cin >> valor2;

    // Chama o método de soma
    resultado = somar(valor1, valor2);

    // Imprime o resultado
    std::cout << "A soma dos valores e: " << resultado << std::endl;

    return 0;  // Indica que o programa terminou com sucesso
}

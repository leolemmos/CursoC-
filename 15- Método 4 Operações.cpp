#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

// Função para somar dois valores
float somar(float a, float b) {
    return a + b;
}

// Função para subtrair dois valores
float subtrair(float a, float b) {
    return a - b;
}

// Função para multiplicar dois valores
float multiplicar(float a, float b) {
    return a * b;
}

// Função para dividir dois valores
float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Erro: Divisao por zero!" << std::endl;
        return 0;
    }
}

int main() {
    int opcao;
    float valor1, valor2, resultado;

    // Exibe o menu de opções
    std::cout << "Selecione uma opcao:" << std::endl;
    std::cout << "[1] Somar" << std::endl;
    std::cout << "[2] Subtrair" << std::endl;
    std::cout << "[3] Multiplicar" << std::endl;
    std::cout << "[4] Dividir" << std::endl;
    std::cin >> opcao;

    // Solicita ao usuário para inserir os dois valores
    std::cout << "Digite o primeiro valor: ";
    std::cin >> valor1;

    std::cout << "Digite o segundo valor: ";
    std::cin >> valor2;

    // Estrutura switch-case para chamar o método apropriado
    switch(opcao) {
        case 1:
            resultado = somar(valor1, valor2);
            std::cout << "Resultado da soma: " << resultado << std::endl;
            break;
        case 2:
            resultado = subtrair(valor1, valor2);
            std::cout << "Resultado da subtracao: " << resultado << std::endl;
            break;
        case 3:
            resultado = multiplicar(valor1, valor2);
            std::cout << "Resultado da multiplicacao: " << resultado << std::endl;
            break;
        case 4:
            resultado = dividir(valor1, valor2);
            std::cout << "Resultado da divisao: " << resultado << std::endl;
            break;
        default:
            std::cout << "Opcao invalida!" << std::endl;
    }

    return 0;  // Indica que o programa terminou com sucesso
}

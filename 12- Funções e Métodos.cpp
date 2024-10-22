#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

void calcularSoma() {
    std::cout << "Você escolheu o método Calcular Soma." << std::endl;
}

void calcularSubtracao() {
    std::cout << "Você escolheu o método Calcular Subtracao." << std::endl;
}

void calcularMultiplicacao() {
    std::cout << "Você escolheu o método Calcular Multiplicacao." << std::endl;
}

void calcularDivisao() {
    std::cout << "Você escolheu o método Calcular Divisao." << std::endl;
}

int main() {
    int opcao;

    // Exibe o menu de opções
    std::cout << "Selecione uma opção:" << std::endl;
    std::cout << "[1] Calcular Soma" << std::endl;
    std::cout << "[2] Calcular Subtracao" << std::endl;
    std::cout << "[3] Calcular Multiplicacao" << std::endl;
    std::cout << "[4] Calcular Divisao" << std::endl;
    std::cin >> opcao;

    // Estrutura switch-case para chamar o método apropriado
    switch(opcao) {
        case 1:
            calcularSoma();
            break;
        case 2:
            calcularSubtracao();
            break;
        case 3:
            calcularMultiplicacao();
            break;
        case 4:
            calcularDivisao();
            break;
        default:
            std::cout << "Opcao invalida!" << std::endl;
    }

    return 0;  // Indica que o programa terminou com sucesso
}

#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    // Declaração das variáveis para armazenar os gastos
    float luz, agua, gas, compras, cartao, faculdade, boleto, curso, total;

    // Solicita ao usuário para inserir os valores dos gastos
    std::cout << "Digite o valor da conta de luz: ";
    std::cin >> luz;

    std::cout << "Digite o valor da conta de água: ";
    std::cin >> agua;

    std::cout << "Digite o valor da conta de gás: ";
    std::cin >> gas;

    std::cout << "Digite o valor das compras: ";
    std::cin >> compras;

    std::cout << "Digite o valor da fatura do cartão: ";
    std::cin >> cartao;

    std::cout << "Digite o valor da faculdade: ";
    std::cin >> faculdade;

    std::cout << "Digite o valor do boleto: ";
    std::cin >> boleto;

    std::cout << "Digite o valor do curso: ";
    std::cin >> curso;

    // Calcula o total dos gastos mensais
    total = luz + agua + gas + compras + cartao + faculdade + boleto + curso;

    // Imprime o total de gastos mensais na tela
    std::cout << "O total de gastos mensais é: R$" << total << std::endl;

    return 0;  // Indica que o programa terminou com sucesso
}

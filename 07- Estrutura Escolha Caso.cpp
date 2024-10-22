#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    int escolha;  // Variável para armazenar a escolha do usuário
    float valor_doacao;  // Variável para armazenar o valor da doação

    // Exibe o menu de doações
    std::cout << "Qual o valor da doacao?" << std::endl;
    std::cout << "[1] Para Doar R$ 10,00" << std::endl;
    std::cout << "[2] Para Doar R$ 20,00" << std::endl;
    std::cout << "[3] Para Doar R$ 30,00" << std::endl;
    std::cout << "[4] Para Doar R$ 40,00" << std::endl;
    std::cout << "[5] Para Doar R$ 50,00" << std::endl;

    // Solicita ao usuário para inserir a escolha
    std::cout << "Escolha uma opcao: ";
    std::cin >> escolha;

    // Utiliza a estrutura switch-case para definir o valor da doação
    switch (escolha) {
        case 1:
            valor_doacao = 10.00;
            break;
        case 2:
            valor_doacao = 20.00;
            break;
        case 3:
            valor_doacao = 30.00;
            break;
        case 4:
            valor_doacao = 40.00;
            break;
        case 5:
            valor_doacao = 50.00;
            break;
        default:
            std::cout << "Opcao invalida!" << std::endl;
            return 1;  // Termina o programa com código de erro
    }

    // Exibe a opção escolhida pelo usuário
    std::cout << "Voce escolheu doar R$ " << valor_doacao << std::endl;

    return 0;  // Indica que o programa terminou com sucesso
}

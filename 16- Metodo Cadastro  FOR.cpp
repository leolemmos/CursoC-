#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

// Estrutura para armazenar informações do produto
struct Produto {
    std::string nome;
    float valor;
    std::string fabricante;
};

// Método para cadastrar um produto
void cadastrarProduto(Produto &produto) {
    std::cout << "Digite o nome do produto: ";
    std::getline(std::cin, produto.nome);

    std::cout << "Digite o valor do produto: ";
    std::cin >> produto.valor;
    std::cin.ignore();  // Ignora o caractere de nova linha deixado por std::cin

    std::cout << "Digite o fabricante do produto: ";
    std::getline(std::cin, produto.fabricante);
}

int main() {
    Produto produtos[5];  // Declara um array de 5 produtos

    // Estrutura de repetição para realizar os 5 cadastros
    for (int i = 0; i < 5; ++i) {
        std::cout << "\nCadastro do produto " << (i + 1) << std::endl;
        cadastrarProduto(produtos[i]);
    }

    // Imprime os cadastros feitos
    std::cout << "\nCadastros realizados:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "\nProduto " << (i + 1) << ":" << std::endl;
        std::cout << "Nome: " << produtos[i].nome << std::endl;
        std::cout << "Valor: " << produtos[i].valor << std::endl;
        std::cout << "Fabricante: " << produtos[i].fabricante << std::endl;
    }

    return 0;  // Indica que o programa terminou com sucesso
}

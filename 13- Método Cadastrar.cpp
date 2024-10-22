#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

void cadastrar(std::string &nome, std::string &telefone, std::string &email, std::string &endereco) {
    // Solicita ao usuário para inserir os dados
    std::cout << "Digite o nome: ";
    std::getline(std::cin, nome);
    
    std::cout << "Digite o telefone: ";
    std::getline(std::cin, telefone);
    
    std::cout << "Digite o email: ";
    std::getline(std::cin, email);
    
    std::cout << "Digite o endereço: ";
    std::getline(std::cin, endereco);
}

int main() {
    // Declaração das variáveis
    std::string nome, telefone, email, endereco;

    // Chama o método de cadastro
    cadastrar(nome, telefone, email, endereco);

    // Exibe os dados cadastrados
    std::cout << "\nDados Cadastrados:" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Telefone: " << telefone << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Endereco: " << endereco << std::endl;

    return 0;  // Indica que o programa terminou com sucesso
}

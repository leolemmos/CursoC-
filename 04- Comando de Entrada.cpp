#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    // Declaração de variáveis para armazenar os dados pessoais
    std::string nome, endereco, curso, email;
    char genero;
    int idade;
    float nota_final;
    bool matriculado;
    double cpf;

    // Solicita ao usuário para inserir os dados pessoais
    std::cout << "Digite o seu nome: ";
    std::getline(std::cin, nome);  // Lê a linha inteira para permitir espaços

    std::cout << "Digite o seu endereço: ";
    std::getline(std::cin, endereco);  // Lê a linha inteira para permitir espaços

    std::cout << "Digite o seu curso: ";
    std::getline(std::cin, curso);  // Lê a linha inteira para permitir espaços

    std::cout << "Digite o seu email: ";
    std::getline(std::cin, email);  // Lê a linha inteira para permitir espaços

    std::cout << "Digite o seu gênero (M/F): ";
    std::cin >> genero;  // Lê um único caractere

    std::cout << "Digite a sua idade: ";
    std::cin >> idade;  // Lê um inteiro

    std::cout << "Digite a sua nota final: ";
    std::cin >> nota_final;  // Lê um float

    std::cout << "Digite o seu CPF: ";
    std::cin >> cpf;  // Lê um double

    std::cout << "Está matriculado? (1 para Sim, 0 para Não): ";
    std::cin >> matriculado;  // Lê um booleano

    // Impressão das informações do aluno
    std::cout << "\nCadastro de Aluno:" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Endereco: " << endereco << std::endl;
    std::cout << "Curso: " << curso << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Nota Final: " << nota_final << std::endl;
    std::cout << "Matriculado: " << (matriculado ? "Sim" : "Nao") << std::endl;
    std::cout << "CPF: " << cpf << std::endl;

    return 0;  // Indica que o programa terminou com sucesso
}

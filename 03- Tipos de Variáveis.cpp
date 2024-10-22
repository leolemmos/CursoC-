#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    // Declaração de variáveis com atribuição direta de valores

    // Variáveis do tipo string
    std::string nome = "Joao Silva";
    std::string endereco = "Rua Exemplo, 123, Sao Paulo, SP";
    std::string curso = "Engenharia da Computacao";
    std::string email = "joao.silva@example.com";

    // Variável do tipo char
    char genero = 'M';

    // Variável do tipo int
    int idade = 21;

    // Variável do tipo float
    float nota_final = 89.5f;

    // Variável do tipo bool
    bool matriculado = true;

    // Variável do tipo double
    double cpf = 12345678900;

    // Impressão das informações do aluno
    std::cout << "Cadastro de Aluno:" << std::endl;
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

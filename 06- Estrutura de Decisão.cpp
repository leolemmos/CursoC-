#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

int main() {
    // Declaração das variáveis para o boletim
    std::string nome_aluno, nome_materia;
    float nota1, nota2, nota3, nota4, media;
    std::string status;

    // Solicita ao usuário para inserir os dados do boletim
    std::cout << "Digite o nome do aluno: ";
    std::getline(std::cin, nome_aluno);

    std::cout << "Digite o nome da materia: ";
    std::getline(std::cin, nome_materia);

    std::cout << "Digite a nota 1: ";
    std::cin >> nota1;

    std::cout << "Digite a nota 2: ";
    std::cin >> nota2;

    std::cout << "Digite a nota 3: ";
    std::cin >> nota3;

    std::cout << "Digite a nota 4: ";
    std::cin >> nota4;

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Verifica o status de aprovação
    if (media >= 7) {
        status = "Aprovado";
    } else {
        status = "Reprovado";
    }

    // Exibe o boletim na tela
    std::cout << "\nBoletim Escolar:" << std::endl;
    std::cout << "Nome do Aluno: " << nome_aluno << std::endl;
    std::cout << "Nome da Materia: " << nome_materia << std::endl;
    std::cout << "Nota 1: " << nota1 << std::endl;
    std::cout << "Nota 2: " << nota2 << std::endl;
    std::cout << "Nota 3: " << nota3 << std::endl;
    std::cout << "Nota 4: " << nota4 << std::endl;
    std::cout << "Media: " << media << std::endl;
    std::cout << "Status: " << status << std::endl;

    return 0;  // Indica que o programa terminou com sucesso
}

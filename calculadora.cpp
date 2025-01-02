/*
#include <iostream>

// Funções para operações matemáticas
float soma(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float mul(float x, float y) {
    return x * y;
}

float div(float x, float y) {
    if (y == 0) {
        std::cout << "Erro: Não é possível dividir por 0.\n";
        return 0;
    }
    return x / y;
}

// Função para solicitar dois números do usuário
void obterNumeros(float& x, float& y) {
    std::cout << "Digite o primeiro número: ";
    std::cin >> x;
    std::cout << "Digite o segundo número: ";
    std::cin >> y;
}

int main() {
    int escolha;
    float a, b;

    // Menu de operações
    std::cout << "Escolha uma operação:\n";
    std::cout << "1 - Soma\n";
    std::cout << "2 - Subtração\n";
    std::cout << "3 - Multiplicação\n";
    std::cout << "4 - Divisão\n";
    std::cout << "Digite sua escolha: ";
    std::cin >> escolha;

    // Lógica para processar a escolha
    if (escolha == 1) {
        obterNumeros(a, b);
        std::cout << "A soma é: " << soma(a, b) << std::endl;
    }
    else if (escolha == 2) {
        obterNumeros(a, b);
        std::cout << "A subtração é: " << sub(a, b) << std::endl;
    }
    else if (escolha == 3) {
        obterNumeros(a, b);
        std::cout << "A multiplicação é: " << mul(a, b) << std::endl;
    }
    else if (escolha == 4) {
        obterNumeros(a, b);
        std::cout << "A divisão é: " << div(a, b) << std::endl;
    }
    else {
        std::cout << "Opção inválida! Por favor, escolha entre 1 e 4." << std::endl;
    }

    return 0;
}
*/
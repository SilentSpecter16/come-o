/*
#include <iostream>

// Fun��es para opera��es matem�ticas
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
        std::cout << "Erro: N�o � poss�vel dividir por 0.\n";
        return 0;
    }
    return x / y;
}

// Fun��o para solicitar dois n�meros do usu�rio
void obterNumeros(float& x, float& y) {
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> x;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> y;
}

int main() {
    int escolha;
    float a, b;

    // Menu de opera��es
    std::cout << "Escolha uma opera��o:\n";
    std::cout << "1 - Soma\n";
    std::cout << "2 - Subtra��o\n";
    std::cout << "3 - Multiplica��o\n";
    std::cout << "4 - Divis�o\n";
    std::cout << "Digite sua escolha: ";
    std::cin >> escolha;

    // L�gica para processar a escolha
    if (escolha == 1) {
        obterNumeros(a, b);
        std::cout << "A soma �: " << soma(a, b) << std::endl;
    }
    else if (escolha == 2) {
        obterNumeros(a, b);
        std::cout << "A subtra��o �: " << sub(a, b) << std::endl;
    }
    else if (escolha == 3) {
        obterNumeros(a, b);
        std::cout << "A multiplica��o �: " << mul(a, b) << std::endl;
    }
    else if (escolha == 4) {
        obterNumeros(a, b);
        std::cout << "A divis�o �: " << div(a, b) << std::endl;
    }
    else {
        std::cout << "Op��o inv�lida! Por favor, escolha entre 1 e 4." << std::endl;
    }

    return 0;
}
*/
#include <iostream>
#include <string>
#include <unordered_map>

// Estrutura para armazenar as senhas em memória
std::unordered_map<std::string, std::string> passwordStorage;

// Função para adicionar uma senha
void addPassword(const std::string& site, const std::string& password) {
    passwordStorage[site] = password;
    std::cout << "Senha armazenada com sucesso para o site: " << site << std::endl;
}

// Função para buscar e exibir uma senha
void getPassword(const std::string& site) {
    auto it = passwordStorage.find(site);
    if (it != passwordStorage.end()) {
        std::cout << "Senha para " << site << ": " << it->second << std::endl;
    }
    else {
        std::cout << "Site não encontrado!" << std::endl;
    }
}

// Menu de opções
void menu() {
    while (true) {
        std::cout << "\nGerenciador de Senhas\n";
        std::cout << "1. Adicionar Senha\n";
        std::cout << "2. Buscar Senha\n";
        std::cout << "3. Sair\n";
        std::cout << "Escolha uma opção: ";

        int choice;
        if (!(std::cin >> choice)) {
            std::cin.clear(); // Limpa o erro
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Tente novamente.\n";
            continue;
        }
        std::cin.ignore(); // Limpa o buffer para evitar problemas com getline

        if (choice == 1) {
            std::string site, password;
            std::cout << "Digite o nome do site: ";
            std::getline(std::cin, site);
            std::cout << "Digite a senha: ";
            std::getline(std::cin, password);

            addPassword(site, password);
        }
        else if (choice == 2) {
            std::string site;
            std::cout << "Digite o nome do site: ";
            std::getline(std::cin, site);

            getPassword(site);
        }
        else if (choice == 3) {
            std::cout << "Encerrando o programa..." << std::endl;
            break;
        }
        else {
            std::cout << "Opção inválida! Tente novamente." << std::endl;
        }
    }
}

int main() {
    menu();
    return 0;
}

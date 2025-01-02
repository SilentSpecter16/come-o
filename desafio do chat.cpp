/*
#include <iostream>

using namespace std;

int main() {

    int es;
    int x, y;

    

    // Menu de Escolhar
    do {
        cout << "1 Para +:\n";
        cout << "2 Para -:\n";
        cout << "3 Para *:\n";
        cout << "4 Para /:\n";
        cout << "0 Para Sair:\n";
        cin >> es;

        // Condicioal para as opções
        switch (es)
        {
        case 1:  cout << "Digiter seu primeiro numero:";
            cin >> x;
            cout << "Sergundo numero:";
            cin >> y;
            cout << "a soma e " << x + y << "!\n";
            break;
        case 2:  cout << "Digiter seu primeiro numero:";
            cin >> x;
            cout << "Sergundo numero:";
            cin >> y;
            cout << "a subtracao e " << x - y << "!\n";
            break;
        case 3:  cout << "Digiter seu primeiro numero:";
            cin >> x;
            cout << "Sergundo numero:";
            cin >> y;
            cout << "a multiplicacao e " << x * y << "!\n";
            break;
        case 4:  cout << "Digiter seu primeiro numero:";
            cin >> x;
            cout << "Sergundo numero:";
            cin >> y;
            if (y == 0) {
                cout << "Nao poder dividir por zero!\n";
                break;

            }
            else {
                cout << "a divisao e " << x / y << "!\n";
                break;
            }
        }
    } while (es != 0);

    return 0;
}
*/
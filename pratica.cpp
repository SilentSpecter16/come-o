#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 0;
	string lop;



	do {
		cout << "Digite 1 ou + para soma\nDigite 2 ou - para subtracao\nDigite 3 ou * para multiplicacao\nDigite 4 ou / para divisao\nDigite 5 ou X para sair\n\n";






		cout << "Digite a operacao: ";
		cin >> lop;
		cout << endl;
		if (lop == "+" or lop == "1") {
			a = 1;
		}
		else if (lop == "-" or lop == "2") {
			a = 2;
		}
		else if (lop == "*" or lop == "3") {
			a = 3;
		}
		else if (lop == "/" or lop == "4") {
			a = 4;
		}
		else if (lop == "X" or lop == "x" or lop == "5") {
			a = 5;
		}

		if (a == 1) {
			int x, y, z;
			cout << "Digite o primeiro numero: ";
			cin >> x;
			cout << "Digite o segundo numero: ";
			cin >> y;
			z = x + y;
			cout << "\nA soma dos numeros e: " << z << "\n\n";
		}
		else if (a == 2) {
			int x, y, z;
			cout << "Digite o primeiro numero: ";
			cin >> x;
			cout << "Digite o segundo numero: ";
			cin >> y;
			z = x - y;
			cout << "\nA subtracao dos numeros e: " << z << "\n\n";
		}
		else if (a == 3) {
			int x, y, z;
			cout << "Digite o primeiro numero: ";
			cin >> x;
			cout << "Digite o segundo numero: ";
			cin >> y;
			z = x * y;
			cout << "\nA multiplicacao dos numeros e: " << z << "\n\n";
		}
		else if (a == 4) {
			int x, y, z;
			cout << "Digite o primeiro numero: ";
			cin >> x;
			cout << "Digite o segundo numero: ";
			cin >> y;
			if (y == 0) {
				cout << "Nao poder dividir por 0\n";
			}
			else {
				z = x / y;
				cout << "\nA divisao dos numeros e: " << z << "\n\n";
			}
		}
		else if (a == 5) {
			cout << "Saindo...\n";
		}
		else {
			cout << "Operacao invalida\n";
			cout <<endl<< a << endl;
		}

	} while (a != 5);
	
	
	
	return 0;
}


/*
int main() {
	int x, y = 0, m, es;


	do{
		cout << "\nDigite o numero da tabuada: ";
		cin >> x;
		cout << "Digite ate que numero deseja multiplica na tabuada: ";
		cin >> m;
		if (m <= 0 or x <= 0) {
			cout << "Nao poder ser 0\n";
			return 0;
		}
		else {
			for (int i = 1;i <= m;i++) {
				y = x * i;
				cout << x << " Multiplicado por " << i << " E igual " << y << ":\n";
			}
		}
		cout << "\n\nDeseja fazer outra tabuada? 1 para sim e 0 para nao: ";
		cin >> es;

	} while (es != 1);
	
	return 0;
}
*/
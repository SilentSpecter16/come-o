#include <iostream>

using namespace std;

int main() {
	int x, y = 0,m,es;
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
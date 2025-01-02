/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Criando um vetor de inteiros
	vector<int> numeros;

	// Adicionando elementos ao vetor
	numeros.push_back(10);  // Adiciona o valor 10
	numeros.push_back(20);  // Adiciona o valor 20
	numeros.push_back(30);  // Adiciona o valor 30

	// Acessando elementos do vetor
	cout << "O primeiro numero: " << numeros[0] << endl;  // Acessa o primeiro elemento
	cout << "O segundo numero: " << numeros[1] << endl;   // Acessa o segundo elemento

	// Tamanho do vetor
	cout << "Tamanho do vetor: " << numeros.size() << endl;

	// Percorrendo o vetor
	for (int i = 0; i < numeros.size(); i++) {
		cout << "Elemento " << i + 1 << ": " << numeros[i] << endl;
	}

	return 0;
}
*/




/*
int main() {
	int x = 123; // Número inicial
	int resto, soma = 0; // Inicializa soma como 0

	// Loop para calcular a soma dos dígitos
	while (x > 0) {
		resto = x % 10; // Obtém o último dígito
		soma += resto;  // Soma o dígito ao total
		x /= 10;        // Remove o último dígito
	}

	// Exibe o resultado
	cout << "A soma dos dígitos é: " << soma << endl;

	return 0;
}
*/

	/* Solicita ao usuário quantos números da sequência deseja exibir
	cout << "Digite o numero de termos da sequencia de Fibonacci: ";
	cin >> n;

	// Inicializa os dois primeiros números da sequência
	int a = 0, b = 1;

	// Exibe os números
	cout << "Sequencia de Fibonacci: ";

	for (int i = 0; i < n; i++) {
		cout << a << " "; // Exibe o valor atual de 'a'

		// Calcula o próximo número
		int c = a + b;

		// Atualiza os valores para a próxima iteração
		a = b;
		b = c;
	}

	return 0;
}
*

















/*
int main() {
	int n;
	long long fatorial = 1;  // Usamos long long para evitar overflow com números grandes

	cout << "Digite um numero: ";
	cin >> n;

	// Verifica se o número é negativo
	if (n < 0) {
		cout << "Fatorial não existe para números negativos!" << endl;
	}
	else {
		// Calculando o fatorial usando um loop
		for (int i = 1; i <= n; i++) {
			fatorial *= i;  // Multiplica fatorial por i
		}

		cout << "O fatorial de " << n << " é: " << fatorial << endl;
	}

	return 0;
}
*/













/* Jogo da adivinhação
int main() {
	srand(time(0)); // Inicializa a semente com o tempo atual
	int es;
	int num = 1 + (rand() % 100);

	while (true) {
		cout << "Digitir o numero";
		cin >> es;

		if (es > num) {
			cout << "\nMenor\n";
		}
		else if (es < num) {
			cout << "\nMaior\n";
		}
		else {
			cout << "\nVocê Ganhou\n";
			break;
		}
	}
	return 0;
}

*/







/* Verificar ser e a String E Um Palidromo
int main() {
	string original, invertida;
	int x;

	while (true) {

		// Entrada da string
		cout << "Digitir Sua String:";
		cin >> original;

		// Construindo a string invertida
		for (int i = original.length() - 1; i >= 0; i--) {
			invertida += original[i];
		}

		// Imprime a string invertida
		cout << original;

		// Verifica se as strings são iguais
		if (original.compare(invertida) == 0) {
			cout << "\nSua String E Um Palindromo:\n"; // Se for palíndromo
		}
		else {
			cout << "\nSua String Nao E Um Palindromo:\n";
		}

		cout << "\nDigiter 0 para sair, e 1 Para continua: ";
		cin >> x;
		if (x == 0) {
			cout << "Saindo:";
			break;
		}
		invertida.clear();
	}

	return 0;
}
*/







/*  OS 5 maiores numeros
int main() {
	int maior, menor;
	int num[5];

	while (true) {

		for (int i = 0; i < 5; i++) {
			cout << "Digiter numero:";
			cin >> num[i];
		}


		maior = num[0];
		menor = num[0];

		for (int i = 1; i < 5; i++) {
			if (num[i] > maior) {
				maior = num[i];
			}
			if (num[i] < menor) {
				menor = num[i];
			}
		}

		cout << "\nO Maior numero e " << maior <<"!\nO Menor Numero e" << menor<< "!\n";

		cout << "\nDigite 0 para sair ou 1 para continuar: ";
		cin >> maior;

		if (maior == 0) {
			cout << "Saindo:";
			break;
		}

	}

	

	return 0;
}
*/













/* Impar ou Par
int main() {
	int es, x;

	while(true)
	{
		cout << "Digirter um numero: ";
		cin >> es;
		x = es % 2;

		if (x == 1) {
			cout << es << " E Impar!\n";
		}
		else {
			cout << es << " E Par!\n";
		}
		
	}
	return 0;
}
*/
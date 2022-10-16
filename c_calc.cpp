#include <string>
#include <iostream>

using namespace std;

int main(){
	int op = true;
	cout << "Bem vindo a calculadora C++\n\n";
	cout << "Soma - 1\nSubtracao - 2\nDivisao - 3\nMultiplicacao - 4\n\n";
	cout << "Insira a operacao desejada - ";
	cin >> op;
	if (op == 1){
		int numero1 = true;
		int numero2 = true;
		cout << "Insira o primeiro numero para realizarmos operacoes - ";
		cin >> numero1;
		cout << "Insira o segundo numero para realizarmos operacoes - ";
		cin >> numero2;
		cout << "Seu resultado foi ";
		cout << numero1 + numero2;

	}

	else if (op == 2){
		int numero1 = true;
		int numero2 = true;
		cout << "Insira o primeiro numero para realizarmos operacoes - ";
		cin >> numero1;
		cout << "Insira o segundo numero para realizarmos operacoes - ";
		cin >> numero2;
		cout << "Seu resultado foi ";
		cout << numero1 - numero2;

	}
	else if (op == 3){
		int numero1 = true;
		int numero2 = true;
		cout << "Insira o primeiro numero para realizarmos operacoes - ";
		cin >> numero1;
		cout << "Insira o segundo numero para realizarmos operacoes - ";
		cin >> numero2;
		cout << "Seu resultado foi ";
		cout << numero1 / numero2;

	}
	else if (op == 4){
		int numero1 = true;
		int numero2 = true;
		cout << "Insira o primeiro numero para realizarmos operacoes - ";
		cin >> numero1;
		cout << "Insira o segundo numero para realizarmos operacoes - ";
		cin >> numero2;
		cout << "Seu resultado foi ";
		cout << numero1 * numero2;

	}

}
#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(float saldo) : Conta(){
	this->saldo = saldo;
}

void ContaPoupanca::Sacar(float valor){
	if (valor <= saldo) {
		saldo-=valor;
		cout << "Operacao realizado com sucesso. Valor sacado da poupanca: " << valor << endl;
	}
	else {
		cout << "\nSaldo insuficiente para a operacao." << endl;
	}

}

float ContaPoupanca::getBalance(){
	//float balance;
	//balance = saldo;
	cout << "Saldo apos operacao na conta Poupanca: " << saldo << endl;
	return saldo;
}



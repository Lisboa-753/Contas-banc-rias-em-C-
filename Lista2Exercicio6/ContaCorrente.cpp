#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(float saldo) : Conta(){
	this->saldo = saldo;
}

void ContaCorrente::Sacar(float valor){
	if (saldo <= valor && (valor <= 4000)) {
		saldo -= valor;
		cout << "\nOperacao realizada com sucesso. Valor sacado: " << valor << endl;
	}
	else {
		cout << "\nValor maior que o Cheque Especial" << endl;
	}
}

float ContaCorrente::getBalance(){
	float balance;
	balance = saldo;
	cout<<"Saldo apos operacao na conta Corrente: "<<saldo<< endl;
	return balance;
}

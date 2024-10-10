#ifndef CONTAPOUPANCA_HPP
#define CONTAPOUPANCA_HPP
#include "Includes.hpp"
#include "Conta.hpp"

class ContaPoupanca : public Conta {
private:
	float saldo;
public:
	ContaPoupanca(float saldo);
	void Sacar(float valor);
	float getBalance();
};



#endif // !CONTAPOUPANCA_HPP

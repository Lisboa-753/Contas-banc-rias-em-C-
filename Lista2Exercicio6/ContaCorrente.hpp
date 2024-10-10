#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP
#include "Includes.hpp"
#include "Conta.hpp"


class ContaCorrente : public Conta {
private:
	float saldo;
public:
	ContaCorrente(float saldo);
	void Sacar(float valor);
	float getBalance();
};


#endif // !CONTACORRENTE_HPP

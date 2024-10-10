#ifndef CONTA_HPP
#define CONTA_HPP
#include "Includes.hpp"

class Conta {
protected:
	float saldo;
public:
	Conta();
	virtual void Sacar(float saldo) = 0;
	virtual float getBalance() = 0;
};


#endif // !CONTA_HPP

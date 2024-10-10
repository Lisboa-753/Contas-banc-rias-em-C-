#include <iostream>
#include "Includes.hpp"
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"


int main()
{

    Conta* pop = new ContaPoupanca(20000);
    
    //pop->Sacar(10.000);

    Conta* cc = new ContaCorrente(5000);

    //cc->Sacar(15.000);

    Conta* vet[2];

    vet[0] = pop;
    vet[1] = cc;

    for (Conta* a : vet) {
        a->Sacar(5500);
        a->getBalance();
    }





}

#include <iostream>

#include "MetodoPagamento.h"
#include "CartaCredito.h"
#include "PayPal.h"
#include "Contanti.h"

int main() {
    MetodoPagamento* metodi[3];
    metodi[0] = new CartaCredito();
    metodi[1] = new PayPal();
    metodi[2] = new Contanti();

    double percentuali[3] = {2.0, 3.5, 0.0};   // commissione per ogni metodo

    for (int i = 0; i < 3; i++) {
        metodi[i]->paga(100);
        metodi[i]->pagaConCommissione(100, percentuali[i]);
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++) {
        delete metodi[i];
    }

    return 0;
}
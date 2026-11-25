#include "CartaCredito.h"
#include <iostream>

void CartaCredito::paga(double importo) const {
    std::cout << "Pagato " << importo << "€ con carta di credito" << std::endl;
}
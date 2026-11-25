#include "PayPal.h"
#include <iostream>

void PayPal::paga(double importo) const {
    std::cout << "Pagato " << importo << "€ tramite PayPal" << std::endl;
}
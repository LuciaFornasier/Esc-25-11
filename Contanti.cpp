#include "Contanti.h"
#include <iostream>

void Contanti::paga(double importo) const {
    std::cout << "Pagato " << importo << "€ in contanti" << std::endl;
}
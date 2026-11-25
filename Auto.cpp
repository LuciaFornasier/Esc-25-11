#include "Auto.h"
#include <iostream>

Auto::Auto(const std::string& nome) : Veicolo(nome, 4) {}

void Auto::descrizione() const {
    std::cout << "Auto: veicolo a " << numeroRuote << " ruote con motore" << std::endl;
}

void Auto::muoviti() const {
    std::cout << "L'auto " << nome << " accelera sull'asfalto" << std::endl;
}

Auto::~Auto() {
    std::cout << "Auto " << nome << " distrutta" << std::endl;
}
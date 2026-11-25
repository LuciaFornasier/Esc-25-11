//
// Created by User on 25/11/2026.
//

#include "Auto.h"

#include <iostream>
#include <ostream>

Auto::Auto(const std::string &nome, int ruote): Veicolo(nome, 4) {}
void Auto::descrizione() const {
    std::cout << "Auto: veicolo a quattro ruote con motore" << std::endl;
}

void Auto::muoviti() const {
    std::cout << "L'Auto si muove" << std::endl;
}
Auto:: ~Auto() {
    std::cout << "Auto " << nome << " distrutto" << std::endl;
}

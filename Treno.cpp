//
// Created by User on 25/11/2026.
//

#include "Treno.h"

#include <iostream>

void Treno:: muoviti() const {
    std::cout << "La bicicletta " << nome << " avanza pedalando" << std::endl;
}
void Treno::descrizione() const {
    std::cout << "Bicicletta: veicolo a " << numeroRuote<< " ruote a propulsione umana" << std::endl;
}
Treno:: ~Treno() {
    std::cout << "Treno " << nome << " distrutto" << std::endl;
}
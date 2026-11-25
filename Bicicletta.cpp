
#include "Bicicletta.h"

#include <iostream>

#include "Veicolo.h"
Bicicletta::Bicicletta(const std::string& nome) : Veicolo(nome, 2) {}
void Bicicletta:: muoviti() const {
    std::cout << "La bicicletta " << nome << " avanza pedalando" << std::endl;
}
void Bicicletta::descrizione() const {
    std::cout << "Bicicletta: veicolo a " << numeroRuote<< " ruote a propulsione umana" << std::endl;
}

Bicicletta::~Bicicletta() {
    std::cout << "Bicicletta " << nome << " distrutto" << std::endl;
}

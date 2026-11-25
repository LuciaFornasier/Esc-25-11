//
// Created by User on 25/11/2026.
//

#include "Veicolo.h"

#include <iostream>
#include <ostream>

void Veicolo::muoviti() const {
    std::cout << "Veicolo si sta muovendo" << std::endl;
}

void Veicolo::descrizione() const {
    std::cout << "Veicolo descrizione: "<<nome <<" "<<numeroRuote <<std::endl;
}

Veicolo::Veicolo(const std::string& nome, int numeroRuote)
    : nome(nome), numeroRuote(numeroRuote) {}

Veicolo::~Veicolo() {
    std::cout << "Veicolo " << nome << " distrutto" << std::endl;
}

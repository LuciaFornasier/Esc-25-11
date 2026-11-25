#include "Treno.h"

#include <iostream>

Treno::Treno(const std::string& nome, int vagoni)
    : Veicolo(nome, 0), vagoni(vagoni) {}

void Treno::muoviti() const {
    std::cout << "Il treno " << nome << " parte dal binario" << std::endl;
}

void Treno::descrizione() const {
    std::cout << "Treno: veicolo su rotaia composto da " << vagoni
              << " vagoni" << std::endl;
}

Treno::~Treno() {
    std::cout << "Treno " << nome << " distrutto" << std::endl;
}
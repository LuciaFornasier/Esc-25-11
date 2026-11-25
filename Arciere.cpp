#include "Arciere.h"
#include <iostream>

Arciere::Arciere(const std::string& nome) : Personaggio(nome) {}

void Arciere::attacca() const {
    std::cout << nome << " scocca una freccia dalla distanza" << std::endl;
}

void Arciere::presentati() const {
    std::cout << "Sono " << nome << ", un arciere dalla mira infallibile" << std::endl;
}
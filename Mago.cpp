#include "Mago.h"
#include <iostream>

Mago::Mago(const std::string& nome) : Personaggio(nome) {}

void Mago::attacca() const {
    std::cout << nome << " lancia una palla di fuoco" << std::endl;
}

void Mago::presentati() const {
    std::cout << "Sono " << nome << ", un mago esperto di incantesimi" << std::endl;
}
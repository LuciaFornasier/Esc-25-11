#include "Guerriero.h"
#include <iostream>

Guerriero::Guerriero(const std::string& nome) : Personaggio(nome) {}

void Guerriero::attacca() const {
    std::cout << nome << " colpisce con un potente fendente di spada" << std::endl;
}

void Guerriero::presentati() const {
    std::cout << "Sono " << nome << ", un guerriero coraggioso" << std::endl;
}
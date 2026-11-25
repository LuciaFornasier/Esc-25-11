#include <iostream>

#include "Personaggio.h"
#include "Guerriero.h"
#include "Mago.h"
#include "Arciere.h"

void turno(Personaggio* p) {
    p->presentati();
    p->attacca();
}

int main() {
    Personaggio* p1 = new Guerriero("Conan");
    Personaggio* p2 = new Mago("Merlino");
    Personaggio* p3 = new Arciere("Legolas");

    turno(p1);
    std::cout << std::endl;

    turno(p2);
    std::cout << std::endl;

    turno(p3);
    std::cout << std::endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
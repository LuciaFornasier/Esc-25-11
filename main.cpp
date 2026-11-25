#include <iostream>
#include <vector>

#include "Personaggio.h"
#include "Guerriero.h"
#include "Mago.h"
#include "Arciere.h"

void turno(Personaggio* p) {
    p->presentati();
    p->attacca();
}

int main() {
    std::vector<Personaggio*> personaggi;
    personaggi.push_back(new Guerriero("Conan"));
    personaggi.push_back(new Mago("Merlino"));
    personaggi.push_back(new Arciere("Legolas"));
    personaggi.push_back(new Guerriero("Aragorn"));

    for (Personaggio* p : personaggi) {
        turno(p);
        std::cout << std::endl;
    }

    for (Personaggio* p : personaggi) {
        delete p;
    }

    return 0;
}

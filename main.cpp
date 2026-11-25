#include <iostream>
#include "Veicolo.h"
#include "Auto.h"
#include "Bicicletta.h"
#include "Treno.h"

int main() {
    Veicolo* v1 = new Auto("Panda");
    Veicolo* v2 = new Bicicletta("Bianchi");
    Veicolo* v3 = new Treno("Frecciarossa", 8);

    v1->descrizione();
    v1->muoviti();

    v2->descrizione();
    v2->muoviti();

    v3->descrizione();
    v3->muoviti();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}
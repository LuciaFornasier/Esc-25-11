#include <iostream>
#include "Veicolo.h"
#include "Auto.h"
#include "Bicicletta.h"
#include "Treno.h"

int main() {
    Veicolo* v1 = new Auto("Panda",4);
    Veicolo* v2 = new Bicicletta("Bianchi",4);
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
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
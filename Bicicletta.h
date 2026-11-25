//
// Created by User on 25/11/2026.
//

#ifndef UNTITLED4_BICICLETTA_H
#define UNTITLED4_BICICLETTA_H
#include <string>

#include "Veicolo.h"


class Bicicletta : public Veicolo {
    public:
        Bicicletta(const std::string& nome,int numeroRuote);
        void muoviti() const override;
        void descrizione() const override;
        ~Bicicletta() override;
};


#endif //UNTITLED4_BICICLETTA_H

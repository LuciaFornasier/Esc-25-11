//
// Created by User on 25/11/2026.
//

#ifndef UNTITLED4_TRENO_H
#define UNTITLED4_TRENO_H
#include "Veicolo.h"


class Treno: public Veicolo {
    public:
        Treno(const std::string& nome,int numeroRuote);
        void muoviti() const override;
        void descrizione() const override;
        ~Treno() override;
};


#endif //UNTITLED4_TRENO_H

#ifndef UNTITLED4_BICICLETTA_H
#define UNTITLED4_BICICLETTA_H
#include "Veicolo.h"

class Bicicletta : public Veicolo {
public:
    Bicicletta(const std::string& nome);
    void muoviti() const override;
    void descrizione() const override;
    ~Bicicletta() override;
};

#endif //UNTITLED4_BICICLETTA_H
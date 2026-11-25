#ifndef UNTITLED4_TRENO_H
#define UNTITLED4_TRENO_H
#include "Veicolo.h"

class Treno : public Veicolo {
private:
    int vagoni;
public:

    Treno(const std::string& nome, int vagoni);
    void muoviti() const override;
    void descrizione() const override;
    ~Treno() override;
};

#endif //UNTITLED4_TRENO_H
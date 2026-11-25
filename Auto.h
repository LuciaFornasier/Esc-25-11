#ifndef UNTITLED4_AUTO_H
#define UNTITLED4_AUTO_H
#include "Veicolo.h"

class Auto : public Veicolo {
public:
    Auto(const std::string& nome);
    void descrizione() const override;
    void muoviti() const override;
    ~Auto() override;
};

#endif //UNTITLED4_AUTO_H
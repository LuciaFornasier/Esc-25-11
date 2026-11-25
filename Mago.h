#ifndef UNTITLED4_MAGO_H
#define UNTITLED4_MAGO_H
#include "Personaggio.h"

class Mago : public Personaggio {
public:
    Mago(const std::string& nome);
    void attacca() const override;
    void presentati() const override;
};

#endif //UNTITLED4_MAGO_H
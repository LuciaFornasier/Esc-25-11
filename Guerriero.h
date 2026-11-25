#ifndef UNTITLED4_GUERRIERO_H
#define UNTITLED4_GUERRIERO_H
#include "Personaggio.h"

class Guerriero : public Personaggio {
public:
    Guerriero(const std::string& nome);
    void attacca() const override;
    void presentati() const override;
};

#endif //UNTITLED4_GUERRIERO_H
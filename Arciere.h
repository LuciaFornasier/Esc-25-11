#ifndef UNTITLED4_ARCIERE_H
#define UNTITLED4_ARCIERE_H
#include "Personaggio.h"

class Arciere : public Personaggio {
public:
    Arciere(const std::string& nome);
    void attacca() const override;
    void presentati() const override;
};

#endif //UNTITLED4_ARCIERE_H
#ifndef UNTITLED4_CONTANTI_H
#define UNTITLED4_CONTANTI_H
#include "MetodoPagamento.h"

class Contanti : public MetodoPagamento {
public:
    void paga(double importo) const override;
};

#endif //UNTITLED4_CONTANTI_H
#ifndef UNTITLED4_CARTACREDITO_H
#define UNTITLED4_CARTACREDITO_H
#include "MetodoPagamento.h"

class CartaCredito : public MetodoPagamento {
public:
    void paga(double importo) const override;
};

#endif //UNTITLED4_CARTACREDITO_H
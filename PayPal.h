#ifndef UNTITLED4_PAYPAL_H
#define UNTITLED4_PAYPAL_H
#include "MetodoPagamento.h"

class PayPal : public MetodoPagamento {
public:
    void paga(double importo) const override;
};

#endif //UNTITLED4_PAYPAL_H
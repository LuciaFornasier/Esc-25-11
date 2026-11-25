#ifndef UNTITLED4_METODOPAGAMENTO_H
#define UNTITLED4_METODOPAGAMENTO_H

class MetodoPagamento {
public:
    virtual ~MetodoPagamento();
    virtual void paga(double importo) const = 0;
    void pagaConCommissione(double importo, double percCommissione) const;
};

#endif //UNTITLED4_METODOPAGAMENTO_H
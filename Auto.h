//
// Created by User on 25/11/2026.
//

#ifndef UNTITLED4_AUTO_H
#define UNTITLED4_AUTO_H
#include "Veicolo.h"


class Auto : public Veicolo {
public:
    Auto(const std::string& nome,int ruote);
    void  descrizione() const override;
    void  muoviti() const override;

    ~Auto();
};


#endif //UNTITLED4_AUTO_H

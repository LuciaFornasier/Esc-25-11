//
// Created by User on 25/11/2026.
//

#ifndef UNTITLED4_VEICOLO_H
#define UNTITLED4_VEICOLO_H
#include <string>


class Veicolo {
protected:
    std::string nome;
    int numeroRuote;
public:
    virtual ~Veicolo();
    virtual void muoviti() const=0;
    virtual void descrizione() const=0;

    Veicolo(const std::string & nome, int numero_ruote);
};


#endif //UNTITLED4_VEICOLO_H

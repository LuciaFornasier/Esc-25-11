#ifndef UNTITLED4_VEICOLO_H
#define UNTITLED4_VEICOLO_H
#include <string>

class Veicolo {
protected:
    std::string nome;
    int numeroRuote;
public:
    Veicolo(const std::string& nome, int numeroRuote);
    virtual ~Veicolo();
    virtual void muoviti() const = 0;
    virtual void descrizione() const = 0;
};

#endif //UNTITLED4_VEICOLO_H
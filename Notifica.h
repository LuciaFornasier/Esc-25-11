#ifndef NOTIFICA_H
#define NOTIFICA_H

#include <string>

// Classe astratta: definisce l'interfaccia comune a tutti i canali di notifica.
class Notifica {
public:
    virtual ~Notifica();

    // Metodo virtuale puro: ogni canale lo implementa a modo suo.
    virtual void invia(std::string messaggio) = 0;
};

#endif // NOTIFICA_H